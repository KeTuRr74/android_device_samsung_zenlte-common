/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_AltitudeInfo_H_
#define	_AltitudeInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AltitudeInfo__altitudeDirection {
	AltitudeInfo__altitudeDirection_height	= 0,
	AltitudeInfo__altitudeDirection_depth	= 1
} e_AltitudeInfo__altitudeDirection;

/* AltitudeInfo */
typedef struct AltitudeInfo {
	long	 altitudeDirection;
	long	 altitude;
	long	 altUncertainty;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AltitudeInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_altitudeDirection_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AltitudeInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _AltitudeInfo_H_ */
#include <asn_internal.h>
