/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef IROHA_SHARED_MODEL_STATEFUL_FAILED_ERROR_RESPONSE_HPP
#define IROHA_SHARED_MODEL_STATEFUL_FAILED_ERROR_RESPONSE_HPP

#include "interfaces/common_objects/types.hpp"
#include "interfaces/query_responses/error_responses/abstract_error_response.hpp"
#include "utils/string_builder.hpp"

namespace shared_model {
  namespace interface {
    /**
     * Error response of broken query's stateful validation
     */
    class StatefulFailedErrorResponse
        : public AbstractErrorResponse<StatefulFailedErrorResponse> {
     private:
      std::string reason() const override {
        return "StatefulFailedErrorResponse";
      }
    };
  }  // namespace interface
}  // namespace shared_model
#endif  // IROHA_SHARED_MODEL_STATEFUL_FAILED_ERROR_RESPONSE_HPP
