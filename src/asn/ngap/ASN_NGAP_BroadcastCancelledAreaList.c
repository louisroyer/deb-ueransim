/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_BroadcastCancelledAreaList.h"

#include "ASN_NGAP_CellIDCancelledEUTRA.h"
#include "ASN_NGAP_TAICancelledEUTRA.h"
#include "ASN_NGAP_EmergencyAreaIDCancelledEUTRA.h"
#include "ASN_NGAP_CellIDCancelledNR.h"
#include "ASN_NGAP_TAICancelledNR.h"
#include "ASN_NGAP_EmergencyAreaIDCancelledNR.h"
#include "ASN_NGAP_ProtocolIE-SingleContainer.h"
asn_per_constraints_t asn_PER_type_ASN_NGAP_BroadcastCancelledAreaList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_NGAP_BroadcastCancelledAreaList_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.cellIDCancelledEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_CellIDCancelledEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIDCancelledEUTRA"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.tAICancelledEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_TAICancelledEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAICancelledEUTRA"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.emergencyAreaIDCancelledEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EmergencyAreaIDCancelledEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaIDCancelledEUTRA"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.cellIDCancelledNR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_CellIDCancelledNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIDCancelledNR"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.tAICancelledNR),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_TAICancelledNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAICancelledNR"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.emergencyAreaIDCancelledNR),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EmergencyAreaIDCancelledNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaIDCancelledNR"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolIE_SingleContainer_126P4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_BroadcastCancelledAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIDCancelledEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tAICancelledEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* emergencyAreaIDCancelledEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellIDCancelledNR */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tAICancelledNR */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* emergencyAreaIDCancelledNR */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_BroadcastCancelledAreaList_specs_1 = {
	sizeof(struct ASN_NGAP_BroadcastCancelledAreaList),
	offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, _asn_ctx),
	offsetof(struct ASN_NGAP_BroadcastCancelledAreaList, present),
	sizeof(((struct ASN_NGAP_BroadcastCancelledAreaList *)0)->present),
	asn_MAP_ASN_NGAP_BroadcastCancelledAreaList_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_BroadcastCancelledAreaList = {
	"BroadcastCancelledAreaList",
	"BroadcastCancelledAreaList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_NGAP_BroadcastCancelledAreaList_constr_1, CHOICE_constraint },
	asn_MBR_ASN_NGAP_BroadcastCancelledAreaList_1,
	7,	/* Elements count */
	&asn_SPC_ASN_NGAP_BroadcastCancelledAreaList_specs_1	/* Additional specs */
};

