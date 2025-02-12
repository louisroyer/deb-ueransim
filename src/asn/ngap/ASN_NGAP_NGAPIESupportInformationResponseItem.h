/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_NGAPIESupportInformationResponseItem_H_
#define	_ASN_NGAP_NGAPIESupportInformationResponseItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_ProtocolIE-ID.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIESupportInfo {
	ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIESupportInfo_supported	= 0,
	ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIESupportInfo_not_supported	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIESupportInfo;
typedef enum ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIEPresenceInfo {
	ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIEPresenceInfo_present	= 0,
	ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIEPresenceInfo_not_present	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_NGAPIESupportInformationResponseItem__ngap_ProtocolIEPresenceInfo;

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_NGAPIESupportInformationResponseItem */
typedef struct ASN_NGAP_NGAPIESupportInformationResponseItem {
	ASN_NGAP_ProtocolIE_ID_t	 ngap_ProtocolIE_Id;
	long	 ngap_ProtocolIESupportInfo;
	long	 ngap_ProtocolIEPresenceInfo;
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_NGAPIESupportInformationResponseItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ngap_ProtocolIESupportInfo_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ngap_ProtocolIEPresenceInfo_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_NGAPIESupportInformationResponseItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_NGAPIESupportInformationResponseItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_NGAPIESupportInformationResponseItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_NGAPIESupportInformationResponseItem_H_ */
#include <asn_internal.h>
