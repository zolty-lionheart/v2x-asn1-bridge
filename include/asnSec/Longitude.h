/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_Longitude_H_
#define	_Longitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OneEightyDegreeInt.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Longitude */
typedef OneEightyDegreeInt_t	 Longitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Longitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Longitude;
asn_struct_free_f Longitude_free;
asn_struct_print_f Longitude_print;
asn_constr_check_f Longitude_constraint;
ber_type_decoder_f Longitude_decode_ber;
der_type_encoder_f Longitude_encode_der;
xer_type_decoder_f Longitude_decode_xer;
xer_type_encoder_f Longitude_encode_xer;
oer_type_decoder_f Longitude_decode_oer;
oer_type_encoder_f Longitude_encode_oer;
per_type_decoder_f Longitude_decode_uper;
per_type_encoder_f Longitude_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Longitude_H_ */
#include <asn_internal.h>
