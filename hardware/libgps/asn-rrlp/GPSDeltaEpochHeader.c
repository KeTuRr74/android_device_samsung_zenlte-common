/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "GPSDeltaEpochHeader.h"

static int
memb_validityPeriod_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_validityPeriod_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GPSDeltaEpochHeader_1[] = {
	{ ATF_POINTER, 3, offsetof(struct GPSDeltaEpochHeader, validityPeriod),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validityPeriod_constraint_1,
		&asn_PER_memb_validityPeriod_constr_2,
		0,
		"validityPeriod"
		},
	{ ATF_POINTER, 2, offsetof(struct GPSDeltaEpochHeader, ephemerisDeltaSizes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSEphemerisDeltaBitSizes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ephemerisDeltaSizes"
		},
	{ ATF_POINTER, 1, offsetof(struct GPSDeltaEpochHeader, ephemerisDeltaScales),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSEphemerisDeltaScales,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ephemerisDeltaScales"
		},
};
static const int asn_MAP_GPSDeltaEpochHeader_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_GPSDeltaEpochHeader_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GPSDeltaEpochHeader_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* validityPeriod */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ephemerisDeltaSizes */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ephemerisDeltaScales */
};
static asn_SEQUENCE_specifics_t asn_SPC_GPSDeltaEpochHeader_specs_1 = {
	sizeof(struct GPSDeltaEpochHeader),
	offsetof(struct GPSDeltaEpochHeader, _asn_ctx),
	asn_MAP_GPSDeltaEpochHeader_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GPSDeltaEpochHeader_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GPSDeltaEpochHeader = {
	"GPSDeltaEpochHeader",
	"GPSDeltaEpochHeader",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GPSDeltaEpochHeader_tags_1,
	sizeof(asn_DEF_GPSDeltaEpochHeader_tags_1)
		/sizeof(asn_DEF_GPSDeltaEpochHeader_tags_1[0]), /* 1 */
	asn_DEF_GPSDeltaEpochHeader_tags_1,	/* Same as above */
	sizeof(asn_DEF_GPSDeltaEpochHeader_tags_1)
		/sizeof(asn_DEF_GPSDeltaEpochHeader_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GPSDeltaEpochHeader_1,
	3,	/* Elements count */
	&asn_SPC_GPSDeltaEpochHeader_specs_1	/* Additional specs */
};

