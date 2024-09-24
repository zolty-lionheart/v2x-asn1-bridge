/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AcaEeCertResponseCubkSpdu"
 * 	found in "AcaEeCertResponseCubkSpdu.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RaEeCertAckSpdu_H_
#define	_RaEeCertAckSpdu_H_


#include <asn_application.h>

/* Including external dependencies */
#include "V2XSecData-Signed.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RaEeCertAckSpdu */
typedef V2XSecData_Signed_32P1_t	 RaEeCertAckSpdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RaEeCertAckSpdu;
asn_struct_free_f RaEeCertAckSpdu_free;
asn_struct_print_f RaEeCertAckSpdu_print;
asn_constr_check_f RaEeCertAckSpdu_constraint;
ber_type_decoder_f RaEeCertAckSpdu_decode_ber;
der_type_encoder_f RaEeCertAckSpdu_encode_der;
xer_type_decoder_f RaEeCertAckSpdu_decode_xer;
xer_type_encoder_f RaEeCertAckSpdu_encode_xer;
oer_type_decoder_f RaEeCertAckSpdu_decode_oer;
oer_type_encoder_f RaEeCertAckSpdu_encode_oer;
per_type_decoder_f RaEeCertAckSpdu_decode_uper;
per_type_encoder_f RaEeCertAckSpdu_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RaEeCertAckSpdu_H_ */
#include <asn_internal.h>
