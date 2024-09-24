/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_UnknownLatitude_H_
#define	_UnknownLatitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NinetyDegreeInt.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UnknownLatitude */
typedef NinetyDegreeInt_t	 UnknownLatitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnknownLatitude;
asn_struct_free_f UnknownLatitude_free;
asn_struct_print_f UnknownLatitude_print;
asn_constr_check_f UnknownLatitude_constraint;
ber_type_decoder_f UnknownLatitude_decode_ber;
der_type_encoder_f UnknownLatitude_encode_der;
xer_type_decoder_f UnknownLatitude_decode_xer;
xer_type_encoder_f UnknownLatitude_encode_xer;
oer_type_decoder_f UnknownLatitude_decode_oer;
oer_type_encoder_f UnknownLatitude_encode_oer;
per_type_decoder_f UnknownLatitude_decode_uper;
per_type_encoder_f UnknownLatitude_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UnknownLatitude_H_ */
#include <asn_internal.h>
