/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityDataTypes"
 * 	found in "SecurityDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#include "MissingCrlIdentifier.h"

asn_TYPE_member_t asn_MBR_MissingCrlIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MissingCrlIdentifier, cracaId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HashedId3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cracaId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MissingCrlIdentifier, crlSeries),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CrlSeries,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crlSeries"
		},
};
static const ber_tlv_tag_t asn_DEF_MissingCrlIdentifier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MissingCrlIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cracaId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* crlSeries */
};
asn_SEQUENCE_specifics_t asn_SPC_MissingCrlIdentifier_specs_1 = {
	sizeof(struct MissingCrlIdentifier),
	offsetof(struct MissingCrlIdentifier, _asn_ctx),
	asn_MAP_MissingCrlIdentifier_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MissingCrlIdentifier = {
	"MissingCrlIdentifier",
	"MissingCrlIdentifier",
	&asn_OP_SEQUENCE,
	asn_DEF_MissingCrlIdentifier_tags_1,
	sizeof(asn_DEF_MissingCrlIdentifier_tags_1)
		/sizeof(asn_DEF_MissingCrlIdentifier_tags_1[0]), /* 1 */
	asn_DEF_MissingCrlIdentifier_tags_1,	/* Same as above */
	sizeof(asn_DEF_MissingCrlIdentifier_tags_1)
		/sizeof(asn_DEF_MissingCrlIdentifier_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MissingCrlIdentifier_1,
	2,	/* Elements count */
	&asn_SPC_MissingCrlIdentifier_specs_1	/* Additional specs */
};

