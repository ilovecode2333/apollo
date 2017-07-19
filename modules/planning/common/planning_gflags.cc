/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/planning/common/planning_gflags.h"

DEFINE_string(planning_config_file,
              "modules/planning/conf/planning_config.pb.txt",
              "planning config file");

DEFINE_int32(planning_loop_rate, 5, "Loop rate for planning node");

DEFINE_string(rtk_trajectory_filename, "modules/planning/data/garage.csv",
              "Loop rate for planning node");

DEFINE_uint64(rtk_trajectory_backward, 10,
              "The number of points to be included in RTK trajectory "
              "before the matched point");

DEFINE_uint64(rtk_trajectory_forward, 800,
              "The number of points to be included in RTK trajectory "
              "after the matched point");

DEFINE_double(replanning_threshold, 2.0,
              "The threshold of position deviation "
              "that triggers the planner replanning");

DEFINE_double(trajectory_resolution, 0.01,
              "The time resolution of "
              "output trajectory.");

// math : active set solver
DEFINE_double(default_active_set_eps_num, 1e-7,
              "qpOases wrapper error control numerator");
DEFINE_double(default_active_set_eps_den, 1e-7,
              "qpOases wrapper error control numerator");
DEFINE_double(default_active_set_eps_iter_ref, 1e-7,
              "qpOases wrapper error control numerator");
DEFINE_bool(default_enable_active_set_debug_info, false,
            "Enable print information");
