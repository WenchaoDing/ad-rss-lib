/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/state/RssStateInformation.hpp"

class RssStateInformationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::state::RssStateInformation value;
    ::ad_rss::physics::Distance valueSafeDistance(0.);
    value.safeDistance = valueSafeDistance;
    ::ad_rss::physics::Distance valueCurrentDistance(0.);
    value.currentDistance = valueCurrentDistance;
    ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
    value.evaluator = valueEvaluator;
    mValue = value;
  }

  ::ad_rss::state::RssStateInformation mValue;
};

TEST_F(RssStateInformationTests, copyConstruction)
{
  ::ad_rss::state::RssStateInformation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, moveConstruction)
{
  ::ad_rss::state::RssStateInformation value(std::move(::ad_rss::state::RssStateInformation(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, copyAssignment)
{
  ::ad_rss::state::RssStateInformation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, moveAssignment)
{
  ::ad_rss::state::RssStateInformation value;
  value = std::move(::ad_rss::state::RssStateInformation(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, comparisonOperatorEqual)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorSafeDistanceDiffers)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::physics::Distance safeDistance(1e6);
  valueA.safeDistance = safeDistance;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorCurrentDistanceDiffers)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::physics::Distance currentDistance(1e6);
  valueA.currentDistance = currentDistance;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorEvaluatorDiffers)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::state::RssStateEvaluator evaluator(::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  valueA.evaluator = evaluator;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
