/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_HOReport_H_
#define	_ASN_NGAP_HOReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ASN_NGAP_Cause.h"
#include "ASN_NGAP_NGRAN-CGI.h"
#include <BIT_STRING.h>
#include "ASN_NGAP_MobilityInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_HOReport__handoverReportType {
	ASN_NGAP_HOReport__handoverReportType_ho_too_early	= 0,
	ASN_NGAP_HOReport__handoverReportType_ho_to_wrong_cell	= 1,
	ASN_NGAP_HOReport__handoverReportType_intersystem_ping_pong	= 2
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_HOReport__handoverReportType;

/* Forward declarations */
struct ASN_NGAP_NGRAN_CGI;
struct ASN_NGAP_EUTRA_CGI;
struct ASN_NGAP_UERLFReportContainer;
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_HOReport */
typedef struct ASN_NGAP_HOReport {
	long	 handoverReportType;
	ASN_NGAP_Cause_t	 handoverCause;
	ASN_NGAP_NGRAN_CGI_t	 sourcecellCGI;
	ASN_NGAP_NGRAN_CGI_t	 targetcellCGI;
	struct ASN_NGAP_NGRAN_CGI	*reestablishmentcellCGI;	/* OPTIONAL */
	BIT_STRING_t	*sourcecellC_RNTI;	/* OPTIONAL */
	struct ASN_NGAP_EUTRA_CGI	*targetcellinE_UTRAN;	/* OPTIONAL */
	ASN_NGAP_MobilityInformation_t	*mobilityInformation;	/* OPTIONAL */
	struct ASN_NGAP_UERLFReportContainer	*uERLFReportContainer;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_HOReport_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_handoverReportType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_HOReport;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_HOReport_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_HOReport_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_HOReport_H_ */
#include <asn_internal.h>
