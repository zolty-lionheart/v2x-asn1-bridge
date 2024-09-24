/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "V2XSecData-Encrypted"
 * 	found in "V2XSecData-Encrypted.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SignedCertificateRequest_H_
#define	_SignedCertificateRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HashAlgorithm.h"
#include "ScopedCertificateRequest.h"
#include "SignerIdentifier.h"
#include "Signature.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SignedCertificateRequest */
typedef struct SignedCertificateRequest {
	HashAlgorithm_t	 hashId;
	ScopedCertificateRequest_t	 tbsRequest;
	SignerIdentifier_t	 signer;
	Signature_t	 signature;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignedCertificateRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignedCertificateRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _SignedCertificateRequest_H_ */
#include <asn_internal.h>
