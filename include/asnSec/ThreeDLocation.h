/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ThreeDLocation_H_
#define	_ThreeDLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Latitude.h"
#include "Longitude.h"
#include "Elevation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ThreeDLocation */
typedef struct ThreeDLocation {
	Latitude_t	 latitude;
	Longitude_t	 longitude;
	Elevation_t	 elevation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThreeDLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThreeDLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_ThreeDLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_ThreeDLocation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ThreeDLocation_H_ */
#include <asn_internal.h>
