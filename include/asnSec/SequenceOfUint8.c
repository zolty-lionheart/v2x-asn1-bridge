/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#include "SequenceOfUint8.h"

asn_TYPE_member_t asn_MBR_SequenceOfUint8_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Uint8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SequenceOfUint8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SequenceOfUint8_specs_1 = {
	sizeof(struct SequenceOfUint8),
	offsetof(struct SequenceOfUint8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SequenceOfUint8 = {
	"SequenceOfUint8",
	"SequenceOfUint8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SequenceOfUint8_tags_1,
	sizeof(asn_DEF_SequenceOfUint8_tags_1)
		/sizeof(asn_DEF_SequenceOfUint8_tags_1[0]), /* 1 */
	asn_DEF_SequenceOfUint8_tags_1,	/* Same as above */
	sizeof(asn_DEF_SequenceOfUint8_tags_1)
		/sizeof(asn_DEF_SequenceOfUint8_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_SequenceOfUint8_1,
	1,	/* Single element */
	&asn_SPC_SequenceOfUint8_specs_1	/* Additional specs */
};

