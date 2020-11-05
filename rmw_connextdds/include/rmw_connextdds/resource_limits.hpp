/******************************************************************************
 *
 * (c) 2020 Copyright, Real-Time Innovations, Inc. (RTI)
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
 *
 ******************************************************************************/

#ifndef RMW_CONNEXTDDS__RESOURCE_LIMITS_HPP_
#define RMW_CONNEXTDDS__RESOURCE_LIMITS_HPP_

#ifndef RMW_CONNEXT_LIMIT_DEFAULT_MAX
#define RMW_CONNEXT_LIMIT_DEFAULT_MAX                   32
#endif /* RMW_CONNEXT_LIMIT_DEFAULT_MAX */

#ifndef RMW_CONNEXT_LIMIT_TYPES_LOCAL_MAX
#define RMW_CONNEXT_LIMIT_TYPES_LOCAL_MAX               RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_TYPES_LOCAL_MAX */
    
#ifndef RMW_CONNEXT_LIMIT_TOPICS_LOCAL_MAX
#define RMW_CONNEXT_LIMIT_TOPICS_LOCAL_MAX              RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_TOPICS_LOCAL_MAX */
    
#ifndef RMW_CONNEXT_LIMIT_READERS_LOCAL_MAX
#define RMW_CONNEXT_LIMIT_READERS_LOCAL_MAX             RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_READERS_LOCAL_MAX */
    
#ifndef RMW_CONNEXT_LIMIT_WRITERS_LOCAL_MAX
#define RMW_CONNEXT_LIMIT_WRITERS_LOCAL_MAX             RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_WRITERS_LOCAL_MAX */

#ifndef RMW_CONNEXT_LIMIT_PARTICIPANTS_REMOTE_MAX
#define RMW_CONNEXT_LIMIT_PARTICIPANTS_REMOTE_MAX       RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_PARTICIPANTS_REMOTE_MAX */
    
#ifndef RMW_CONNEXT_LIMIT_WRITERS_REMOTE_MAX
#define RMW_CONNEXT_LIMIT_WRITERS_REMOTE_MAX            RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_WRITERS_REMOTE_MAX */
    
#ifndef RMW_CONNEXT_LIMIT_READERS_REMOTE_MAX
#define RMW_CONNEXT_LIMIT_READERS_REMOTE_MAX            RMW_CONNEXT_LIMIT_DEFAULT_MAX
#endif /* RMW_CONNEXT_LIMIT_READERS_REMOTE_MAX */

#ifndef RMW_CONNEXT_LIMIT_SAMPLES_MAX
#define RMW_CONNEXT_LIMIT_SAMPLES_MAX                   10
#endif /* RMW_CONNEXT_LIMIT_SAMPLES_MAX */

#ifndef RMW_CONNEXT_LIMIT_KEEP_ALL_SAMPLES
#define RMW_CONNEXT_LIMIT_KEEP_ALL_SAMPLES              1000
#endif /* RMW_CONNEXT_LIMIT_SAMPLES_MAX */

#endif // RMW_CONNEXTDDS__RESOURCE_LIMITS_HPP_