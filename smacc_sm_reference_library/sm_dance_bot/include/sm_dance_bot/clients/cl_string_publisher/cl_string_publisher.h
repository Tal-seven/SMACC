#pragma once

#include <smacc/client_bases/smacc_publisher_client.h>
#include <std_msgs/String.h>

namespace sm_dance_bot
{
namespace cl_string_publisher
{
class ClStringPublisher : public smacc::SmaccPublisherClient
{
public:
    ClStringPublisher(std::string topicName)
        : smacc::SmaccPublisherClient()
    {
        this->configure<std_msgs::String>(topicName);
    }
};
} // namespace cl_string_publisher
} // namespace sm_dance_bot