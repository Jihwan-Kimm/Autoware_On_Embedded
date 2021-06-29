/*
 * Copyright 2018-2019 Autoware Foundation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <imm_ukf_pda/imm_ukf_pda.h>
#include <rubis_sched/sched.hpp>
#define SPIN_PROFILING

int scheduling_flag_;
int profiling_flag_;
std::string response_time_filename_;
int rate_;
double minimum_inter_release_time_;
double execution_time_;
double relative_deadline_;

int main(int argc, char** argv)
{
  ros::init(argc, argv, "imm_ukf_pda_tracker");
  ros::NodeHandle private_nh("~");

  private_nh.param<int>("/imm_ukf_pda_track/scheduling_flag", scheduling_flag_, 0);
  private_nh.param<int>("/imm_ukf_pda_track/profiling_flag", profiling_flag_, 0);
  private_nh.param<std::string>("/imm_ukf_pda_track/response_time_filename", response_time_filename_, "/home/hypark/Documents/profiling/response_time/imm_ukf_pda_track.csv");
  private_nh.param<int>("/imm_ukf_pda_track/rate", rate_, 10);
  private_nh.param("/imm_ukf_pda_track/minimum_inter_release_time", minimum_inter_release_time_, (double)10);
  private_nh.param("/imm_ukf_pda_track/execution_time", execution_time_, (double)10);
  private_nh.param("/imm_ukf_pda_track/relative_deadline", relative_deadline_, (double)10);

  ImmUkfPda app;
  app.run();

  // SPIN
  // if(!scheduling_flag_ && !profiling_flag_){
    ros::spin();
  // }
  // else{
  //   FILE *fp;
  //   if(profiling_flag_){      
  //     fp = fopen(response_time_filename_.c_str(), "a");
  //   }

  //   ros::Rate r(rate_);
  //   struct timespec start_time, end_time;
  //   while(ros::ok()){
  //     if(profiling_flag_){        
  //       clock_gettime(CLOCK_MONOTONIC, &start_time);
  //     }
  //     if(scheduling_flag_){
  //       rubis::sched::set_sched_deadline(gettid(), 
  //         static_cast<uint64_t>(execution_time_), 
  //         static_cast<uint64_t>(relative_deadline_), 
  //         static_cast<uint64_t>(minimum_inter_release_time_)
  //       );
  //     }      

  //     ros::spinOnce();

  //     if(profiling_flag_){
  //       clock_gettime(CLOCK_MONOTONIC, &end_time);
  //       fprintf(fp, "%lld.%.9ld,%lld.%.9ld,%d\n",start_time.tv_sec,start_time.tv_nsec,end_time.tv_sec,end_time.tv_nsec,getpid());    
  //       fflush(fp);
  //     }

  //     r.sleep();
  //   }  
  // fclose(fp);
  // }

  return 0;
}
