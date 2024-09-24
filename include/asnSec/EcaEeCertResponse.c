/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EcaEeInterfacePdu"
 * 	found in "EcaEeInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "EcaEeCertResponse.h"

static int
memb_version_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_privateKeyInfo_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_version_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_version_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (1..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_privateKeyInfo_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_privateKeyInfo_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EcaEeCertResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EcaEeCertResponse, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint8,
		0,
		{ &asn_OER_memb_version_constr_2, &asn_PER_memb_version_constr_2,  memb_version_constraint_1 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EcaEeCertResponse, requestHash),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HashedId8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestHash"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EcaEeCertResponse, ecaCertChain),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SequenceOfCertificate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecaCertChain"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EcaEeCertResponse, certificate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Certificate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"certificate"
		},
	{ ATF_POINTER, 1, offsetof(struct EcaEeCertResponse, privateKeyInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_privateKeyInfo_constr_6, &asn_PER_memb_privateKeyInfo_constr_6,  memb_privateKeyInfo_constraint_1 },
		0, 0, /* No default value */
		"privateKeyInfo"
		},
};
static const int asn_MAP_EcaEeCertResponse_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_EcaEeCertResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EcaEeCertResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestHash */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ecaCertChain */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* certificate */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* privateKeyInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_EcaEeCertResponse_specs_1 = {
	sizeof(struct EcaEeCertResponse),
	offsetof(struct EcaEeCertResponse, _asn_ctx),
	asn_MAP_EcaEeCertResponse_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_EcaEeCertResponse_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EcaEeCertResponse = {
	"EcaEeCertResponse",
	"EcaEeCertResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_EcaEeCertResponse_tags_1,
	sizeof(asn_DEF_EcaEeCertResponse_tags_1)
		/sizeof(asn_DEF_EcaEeCertResponse_tags_1[0]), /* 1 */
	asn_DEF_EcaEeCertResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_EcaEeCertResponse_tags_1)
		/sizeof(asn_DEF_EcaEeCertResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EcaEeCertResponse_1,
	5,	/* Elements count */
	&asn_SPC_EcaEeCertResponse_specs_1	/* Additional specs */
};

