/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2025 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/x509v3err.h>
#include "crypto/x509v3err.h"

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA X509V3_str_reasons[] = {
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_BAD_IP_ADDRESS), "bad ip address"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_BAD_OBJECT), "bad object"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_BAD_OPTION), "bad option"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_BAD_VALUE), "bad value"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_BN_DEC2BN_ERROR), "bn dec2bn error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_BN_TO_ASN1_INTEGER_ERROR),
     "bn to asn1 integer error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_DIRNAME_ERROR), "dirname error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_DISTPOINT_ALREADY_SET),
     "distpoint already set"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_DUPLICATE_ZONE_ID),
     "duplicate zone id"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EMPTY_KEY_USAGE), "empty key usage"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_ERROR_CONVERTING_ZONE),
     "error converting zone"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_ERROR_CREATING_EXTENSION),
     "error creating extension"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_ERROR_IN_EXTENSION),
     "error in extension"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EXPECTED_A_SECTION_NAME),
     "expected a section name"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EXTENSION_EXISTS),
     "extension exists"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EXTENSION_NAME_ERROR),
     "extension name error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EXTENSION_NOT_FOUND),
     "extension not found"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EXTENSION_SETTING_NOT_SUPPORTED),
     "extension setting not supported"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_EXTENSION_VALUE_ERROR),
     "extension value error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_ILLEGAL_EMPTY_EXTENSION),
     "illegal empty extension"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INCORRECT_POLICY_SYNTAX_TAG),
     "incorrect policy syntax tag"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_ASNUMBER),
     "invalid asnumber"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_ASRANGE), "invalid asrange"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_BOOLEAN_STRING),
     "invalid boolean string"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_CERTIFICATE),
     "invalid certificate"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_EMPTY_NAME),
     "invalid empty name"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_EXTENSION_STRING),
     "invalid extension string"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_INHERITANCE),
     "invalid inheritance"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_IPADDRESS),
     "invalid ipaddress"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_MULTIPLE_RDNS),
     "invalid multiple rdns"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_NAME), "invalid name"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_NULL_ARGUMENT),
     "invalid null argument"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_NULL_VALUE),
     "invalid null value"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_NUMBER), "invalid number"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_NUMBERS), "invalid numbers"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_OBJECT_IDENTIFIER),
     "invalid object identifier"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_OPTION), "invalid option"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_POLICY_IDENTIFIER),
     "invalid policy identifier"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_PROXY_POLICY_SETTING),
     "invalid proxy policy setting"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_PURPOSE), "invalid purpose"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_SAFI), "invalid safi"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_SECTION), "invalid section"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_INVALID_SYNTAX), "invalid syntax"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_ISSUER_DECODE_ERROR),
     "issuer decode error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_MISSING_VALUE), "missing value"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NEED_ORGANIZATION_AND_NUMBERS),
     "need organization and numbers"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NEGATIVE_PATHLEN),
     "negative pathlen"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_CONFIG_DATABASE),
     "no config database"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_ISSUER_CERTIFICATE),
     "no issuer certificate"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_ISSUER_DETAILS),
     "no issuer details"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_POLICY_IDENTIFIER),
     "no policy identifier"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED),
     "no proxy cert policy language defined"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_PUBLIC_KEY), "no public key"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_NO_SUBJECT_DETAILS),
     "no subject details"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_OPERATION_NOT_DEFINED),
     "operation not defined"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_OTHERNAME_ERROR), "othername error"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_POLICY_LANGUAGE_ALREADY_DEFINED),
     "policy language already defined"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_POLICY_PATH_LENGTH),
     "policy path length"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_POLICY_PATH_LENGTH_ALREADY_DEFINED),
     "policy path length already defined"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY),
     "policy when proxy language requires no policy"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_PURPOSE_NOT_UNIQUE),
     "purpose not unique"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_SECTION_NOT_FOUND),
     "section not found"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNABLE_TO_GET_ISSUER_DETAILS),
     "unable to get issuer details"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNABLE_TO_GET_ISSUER_KEYID),
     "unable to get issuer keyid"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNKNOWN_BIT_STRING_ARGUMENT),
     "unknown bit string argument"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNKNOWN_EXTENSION),
     "unknown extension"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNKNOWN_EXTENSION_NAME),
     "unknown extension name"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNKNOWN_OPTION), "unknown option"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNKNOWN_VALUE), "unknown value"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNSUPPORTED_OPTION),
     "unsupported option"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_UNSUPPORTED_TYPE),
     "unsupported type"},
    {ERR_PACK(ERR_LIB_X509V3, 0, X509V3_R_USER_TOO_LONG), "user too long"},
    {0, NULL}
};

#endif

int ossl_err_load_X509V3_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_reason_error_string(X509V3_str_reasons[0].error) == NULL)
        ERR_load_strings_const(X509V3_str_reasons);
#endif
    return 1;
}
