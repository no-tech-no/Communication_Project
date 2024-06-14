/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_S1AP_InterSystemMeasurementItem_H_
#define	_S1AP_InterSystemMeasurementItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB {
	S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB_kHz15	= 0,
	S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB_kHz30	= 1,
	S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB_kHz60	= 2,
	S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB_kHz120	= 3,
	S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB_kHz240	= 4
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_InterSystemMeasurementItem__subcarrierSpacingSSB;

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_InterSystemMeasurementItem */
typedef struct S1AP_InterSystemMeasurementItem {
	long	 freqBandIndicatorNR;
	long	 sSBfrequencies;
	long	 subcarrierSpacingSSB;
	long	*maxRSIndexCellQual;	/* OPTIONAL */
	OCTET_STRING_t	*sMTC;	/* OPTIONAL */
	OCTET_STRING_t	*threshRS_Index_r15;	/* OPTIONAL */
	OCTET_STRING_t	*sSBToMeasure;	/* OPTIONAL */
	OCTET_STRING_t	*sSRSSIMeasurement;	/* OPTIONAL */
	OCTET_STRING_t	*quantityConfigNR_R15;	/* OPTIONAL */
	OCTET_STRING_t	*excludedCellsToAddModList;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_InterSystemMeasurementItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_S1AP_subcarrierSpacingSSB_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_InterSystemMeasurementItem;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_InterSystemMeasurementItem_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_InterSystemMeasurementItem_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_InterSystemMeasurementItem_H_ */
#include <asn_internal.h>