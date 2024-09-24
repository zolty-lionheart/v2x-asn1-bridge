/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "V2XSecData-Encrypted"
 * 	found in "V2XSecData-Encrypted.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ScopedCertificateRequest_H_
#define	_ScopedCertificateRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ScmsPdu.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ScopedCertificateRequest */
typedef ScmsPdu_t	 ScopedCertificateRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ScopedCertificateRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ScopedCertificateRequest;
asn_struct_free_f ScopedCertificateRequest_free;
asn_struct_print_f ScopedCertificateRequest_print;
asn_constr_check_f ScopedCertificateRequest_constraint;
ber_type_decoder_f ScopedCertificateRequest_decode_ber;
der_type_encoder_f ScopedCertificateRequest_encode_der;
xer_type_decoder_f ScopedCertificateRequest_decode_xer;
xer_type_encoder_f ScopedCertificateRequest_encode_xer;
oer_type_decoder_f ScopedCertificateRequest_decode_oer;
oer_type_encoder_f ScopedCertificateRequest_encode_oer;
per_type_decoder_f ScopedCertificateRequest_decode_uper;
per_type_encoder_f ScopedCertificateRequest_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ScopedCertificateRequest_H_ */
#include <asn_internal.h>
