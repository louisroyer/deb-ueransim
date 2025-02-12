/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_TooearlyIntersystemHO_H_
#define	_ASN_NGAP_TooearlyIntersystemHO_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_EUTRA-CGI.h"
#include "ASN_NGAP_NGRAN-CGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_UERLFReportContainer;
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_TooearlyIntersystemHO */
typedef struct ASN_NGAP_TooearlyIntersystemHO {
	ASN_NGAP_EUTRA_CGI_t	 sourcecellID;
	ASN_NGAP_NGRAN_CGI_t	 failurecellID;
	struct ASN_NGAP_UERLFReportContainer	*uERLFReportContainer;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_TooearlyIntersystemHO_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_TooearlyIntersystemHO;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_TooearlyIntersystemHO_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_TooearlyIntersystemHO_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_TooearlyIntersystemHO_H_ */
#include <asn_internal.h>
