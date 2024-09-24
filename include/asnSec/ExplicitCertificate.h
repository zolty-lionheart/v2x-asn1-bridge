/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityDataTypes"
 * 	found in "SecurityDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ExplicitCertificate_H_
#define	_ExplicitCertificate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CertificateBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ExplicitCertificate */
typedef CertificateBase_t	 ExplicitCertificate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExplicitCertificate;
asn_struct_free_f ExplicitCertificate_free;
asn_struct_print_f ExplicitCertificate_print;
asn_constr_check_f ExplicitCertificate_constraint;
ber_type_decoder_f ExplicitCertificate_decode_ber;
der_type_encoder_f ExplicitCertificate_encode_der;
xer_type_decoder_f ExplicitCertificate_decode_xer;
xer_type_encoder_f ExplicitCertificate_encode_xer;
oer_type_decoder_f ExplicitCertificate_decode_oer;
oer_type_encoder_f ExplicitCertificate_encode_oer;
per_type_decoder_f ExplicitCertificate_decode_uper;
per_type_encoder_f ExplicitCertificate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExplicitCertificate_H_ */
#include <asn_internal.h>
