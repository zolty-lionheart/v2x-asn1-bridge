/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#include "SequenceOfAid.h"

asn_TYPE_member_t asn_MBR_SequenceOfAid_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Aid,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SequenceOfAid_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SequenceOfAid_specs_1 = {
	sizeof(struct SequenceOfAid),
	offsetof(struct SequenceOfAid, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SequenceOfAid = {
	"SequenceOfAid",
	"SequenceOfAid",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SequenceOfAid_tags_1,
	sizeof(asn_DEF_SequenceOfAid_tags_1)
		/sizeof(asn_DEF_SequenceOfAid_tags_1[0]), /* 1 */
	asn_DEF_SequenceOfAid_tags_1,	/* Same as above */
	sizeof(asn_DEF_SequenceOfAid_tags_1)
		/sizeof(asn_DEF_SequenceOfAid_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_SequenceOfAid_1,
	1,	/* Single element */
	&asn_SPC_SequenceOfAid_specs_1	/* Additional specs */
};

