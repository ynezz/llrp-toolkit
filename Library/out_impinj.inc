
/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C++ (aka cpp) implementation. It is generated into a .inc file
 * that is included by a platform specific .cpp source file.
 * That .cpp file takes care of prerequisites needed by this file.
 */



/*
 * Vendor descriptors
 */

  
const CVendorDescriptor
g_vdescImpinj =
{
  "Impinj",	// m_pName
  25882,	// m_VendorID
};


/*
 * Namespace descriptors
 */

  
const CNamespaceDescriptor
g_nsdescImpinj =
{
  "Impinj",	// m_pPrefix
  "http://developer.impinj.com/ltk/schema/encoding/xml/1.8",	// m_pURI
  "http://developer.impinj.com/ltk/schema/encoding/xml/1.8/impinj.xsd",	// m_pSchemaLocation
};


/*
 * Enumeration string tables
 */

  
const SEnumTableEntry
g_estImpinjRequestedDataType[] =
{
  
    {
        "All_Capabilities",
        ImpinjRequestedDataType_All_Capabilities,
    },
    {
        "Impinj_Detailed_Version",
        ImpinjRequestedDataType_Impinj_Detailed_Version,
    },
    {
        "Impinj_Frequency_Capabilities",
        ImpinjRequestedDataType_Impinj_Frequency_Capabilities,
    },
    {
        "All_Configuration",
        ImpinjRequestedDataType_All_Configuration,
    },
    {
        "Impinj_Sub_Regulatory_Region",
        ImpinjRequestedDataType_Impinj_Sub_Regulatory_Region,
    },
    {
        "Impinj_Forklift_Configuration",
        ImpinjRequestedDataType_Impinj_Forklift_Configuration,
    },
    {
        "Impinj_GPI_Debounce_Configuration",
        ImpinjRequestedDataType_Impinj_GPI_Debounce_Configuration,
    },
    {
        "Impinj_Reader_Temperature",
        ImpinjRequestedDataType_Impinj_Reader_Temperature,
    },
    {
        "Impinj_Link_Monitor_Configuration",
        ImpinjRequestedDataType_Impinj_Link_Monitor_Configuration,
    },
    {
        "Impinj_Report_Buffer_Configuration",
        ImpinjRequestedDataType_Impinj_Report_Buffer_Configuration,
    },
    {
        "Impinj_Access_Spec_Configuration",
        ImpinjRequestedDataType_Impinj_Access_Spec_Configuration,
    },
    {
        "Impinj_GPS_NMEA_Sentences",
        ImpinjRequestedDataType_Impinj_GPS_NMEA_Sentences,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjRegulatoryRegion[] =
{
  
    {
        "FCC_Part_15_247",
        ImpinjRegulatoryRegion_FCC_Part_15_247,
    },
    {
        "ETSI_EN_300_220",
        ImpinjRegulatoryRegion_ETSI_EN_300_220,
    },
    {
        "ETSI_EN_302_208_With_LBT",
        ImpinjRegulatoryRegion_ETSI_EN_302_208_With_LBT,
    },
    {
        "Hong_Kong_920_925_MHz",
        ImpinjRegulatoryRegion_Hong_Kong_920_925_MHz,
    },
    {
        "Taiwan_922_928_MHz",
        ImpinjRegulatoryRegion_Taiwan_922_928_MHz,
    },
    {
        "Japan_952_954_MHz",
        ImpinjRegulatoryRegion_Japan_952_954_MHz,
    },
    {
        "Japan_952_954_MHz_Low_Power",
        ImpinjRegulatoryRegion_Japan_952_954_MHz_Low_Power,
    },
    {
        "ETSI_EN_302_208_v1_2_1",
        ImpinjRegulatoryRegion_ETSI_EN_302_208_v1_2_1,
    },
    {
        "Korea_910_914_MHz",
        ImpinjRegulatoryRegion_Korea_910_914_MHz,
    },
    {
        "Malaysia_919_923_MHz",
        ImpinjRegulatoryRegion_Malaysia_919_923_MHz,
    },
    {
        "China_920_925_MHz",
        ImpinjRegulatoryRegion_China_920_925_MHz,
    },
    {
        "Japan_952_954_MHz_Without_LBT",
        ImpinjRegulatoryRegion_Japan_952_954_MHz_Without_LBT,
    },
    {
        "South_Africa_915_919_MHz",
        ImpinjRegulatoryRegion_South_Africa_915_919_MHz,
    },
    {
        "Brazil_902_907_and_915_928_MHz",
        ImpinjRegulatoryRegion_Brazil_902_907_and_915_928_MHz,
    },
    {
        "Thailand_920_925_MHz",
        ImpinjRegulatoryRegion_Thailand_920_925_MHz,
    },
    {
        "Singapore_920_925_MHz",
        ImpinjRegulatoryRegion_Singapore_920_925_MHz,
    },
    {
        "Australia_920_926_MHz",
        ImpinjRegulatoryRegion_Australia_920_926_MHz,
    },
    {
        "India_865_867_MHz",
        ImpinjRegulatoryRegion_India_865_867_MHz,
    },
    {
        "Uruguay_916_928_MHz",
        ImpinjRegulatoryRegion_Uruguay_916_928_MHz,
    },
    {
        "Vietnam_920_925_MHz",
        ImpinjRegulatoryRegion_Vietnam_920_925_MHz,
    },
    {
        "Israel_915_917_MHz",
        ImpinjRegulatoryRegion_Israel_915_917_MHz,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjInventorySearchType[] =
{
  
    {
        "Reader_Selected",
        ImpinjInventorySearchType_Reader_Selected,
    },
    {
        "Single_Target",
        ImpinjInventorySearchType_Single_Target,
    },
    {
        "Dual_Target",
        ImpinjInventorySearchType_Dual_Target,
    },
    {
        "Single_Target_With_Suppression",
        ImpinjInventorySearchType_Single_Target_With_Suppression,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjTagDirectionAntennaConfiguration[] =
{
  
    {
        "Dual_Antenna",
        ImpinjTagDirectionAntennaConfiguration_Dual_Antenna,
    },
    {
        "Quad_Antenna",
        ImpinjTagDirectionAntennaConfiguration_Quad_Antenna,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjDirection[] =
{
  
    {
        "Indeterminate",
        ImpinjDirection_Indeterminate,
    },
    {
        "From_Side2_To_Side1",
        ImpinjDirection_From_Side2_To_Side1,
    },
    {
        "From_Side1_To_Side2",
        ImpinjDirection_From_Side1_To_Side2,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjFixedFrequencyMode[] =
{
  
    {
        "Disabled",
        ImpinjFixedFrequencyMode_Disabled,
    },
    {
        "Auto_Select",
        ImpinjFixedFrequencyMode_Auto_Select,
    },
    {
        "Channel_List",
        ImpinjFixedFrequencyMode_Channel_List,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjReducedPowerMode[] =
{
  
    {
        "Disabled",
        ImpinjReducedPowerMode_Disabled,
    },
    {
        "Enabled",
        ImpinjReducedPowerMode_Enabled,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjLowDutyCycleMode[] =
{
  
    {
        "Disabled",
        ImpinjLowDutyCycleMode_Disabled,
    },
    {
        "Enabled",
        ImpinjLowDutyCycleMode_Enabled,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjLinkMonitorMode[] =
{
  
    {
        "Disabled",
        ImpinjLinkMonitorMode_Disabled,
    },
    {
        "Enabled",
        ImpinjLinkMonitorMode_Enabled,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjReportBufferMode[] =
{
  
    {
        "Normal",
        ImpinjReportBufferMode_Normal,
    },
    {
        "Low_Latency",
        ImpinjReportBufferMode_Low_Latency,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjBlockPermalockResultType[] =
{
  
    {
        "Success",
        ImpinjBlockPermalockResultType_Success,
    },
    {
        "Insufficient_Power",
        ImpinjBlockPermalockResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        ImpinjBlockPermalockResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        ImpinjBlockPermalockResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        ImpinjBlockPermalockResultType_Nonspecific_Reader_Error,
    },
    {
        "Incorrect_Password_Error",
        ImpinjBlockPermalockResultType_Incorrect_Password_Error,
    },
    {
        "Tag_Memory_Overrun_Error",
        ImpinjBlockPermalockResultType_Tag_Memory_Overrun_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjGetBlockPermalockStatusResultType[] =
{
  
    {
        "Success",
        ImpinjGetBlockPermalockStatusResultType_Success,
    },
    {
        "Nonspecific_Tag_Error",
        ImpinjGetBlockPermalockStatusResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        ImpinjGetBlockPermalockStatusResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        ImpinjGetBlockPermalockStatusResultType_Nonspecific_Reader_Error,
    },
    {
        "Incorrect_Password_Error",
        ImpinjGetBlockPermalockStatusResultType_Incorrect_Password_Error,
    },
    {
        "Tag_Memory_Overrun_Error",
        ImpinjGetBlockPermalockStatusResultType_Tag_Memory_Overrun_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjQTDataProfile[] =
{
  
    {
        "Unknown",
        ImpinjQTDataProfile_Unknown,
    },
    {
        "Private",
        ImpinjQTDataProfile_Private,
    },
    {
        "Public",
        ImpinjQTDataProfile_Public,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjQTAccessRange[] =
{
  
    {
        "Unknown",
        ImpinjQTAccessRange_Unknown,
    },
    {
        "Normal_Range",
        ImpinjQTAccessRange_Normal_Range,
    },
    {
        "Short_Range",
        ImpinjQTAccessRange_Short_Range,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjQTPersistence[] =
{
  
    {
        "Unknown",
        ImpinjQTPersistence_Unknown,
    },
    {
        "Temporary",
        ImpinjQTPersistence_Temporary,
    },
    {
        "Permanent",
        ImpinjQTPersistence_Permanent,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjSetQTConfigResultType[] =
{
  
    {
        "Success",
        ImpinjSetQTConfigResultType_Success,
    },
    {
        "Insufficient_Power",
        ImpinjSetQTConfigResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        ImpinjSetQTConfigResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        ImpinjSetQTConfigResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        ImpinjSetQTConfigResultType_Nonspecific_Reader_Error,
    },
    {
        "Incorrect_Password_Error",
        ImpinjSetQTConfigResultType_Incorrect_Password_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjGetQTConfigResultType[] =
{
  
    {
        "Success",
        ImpinjGetQTConfigResultType_Success,
    },
    {
        "Nonspecific_Tag_Error",
        ImpinjGetQTConfigResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        ImpinjGetQTConfigResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        ImpinjGetQTConfigResultType_Nonspecific_Reader_Error,
    },
    {
        "Incorrect_Password_Error",
        ImpinjGetQTConfigResultType_Incorrect_Password_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjSerializedTIDMode[] =
{
  
    {
        "Disabled",
        ImpinjSerializedTIDMode_Disabled,
    },
    {
        "Enabled",
        ImpinjSerializedTIDMode_Enabled,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjRFPhaseAngleMode[] =
{
  
    {
        "Disabled",
        ImpinjRFPhaseAngleMode_Disabled,
    },
    {
        "Enabled",
        ImpinjRFPhaseAngleMode_Enabled,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjPeakRSSIMode[] =
{
  
    {
        "Disabled",
        ImpinjPeakRSSIMode_Disabled,
    },
    {
        "Enabled",
        ImpinjPeakRSSIMode_Enabled,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estImpinjGPSCoordinatesMode[] =
{
  
    {
        "Disabled",
        ImpinjGPSCoordinatesMode_Disabled,
    },
    {
        "Enabled",
        ImpinjGPSCoordinatesMode_Enabled,
    },
    { 0, 0 }
};




/*
*****************************************************************
**
** Custom message IMPINJ_ENABLE_EXTENSIONS
**
*****************************************************************
*/
  

const CTypeDescriptor
CIMPINJ_ENABLE_EXTENSIONS::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "IMPINJ_ENABLE_EXTENSIONS",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    21,	// m_TypeNum
    &CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CIMPINJ_ENABLE_EXTENSIONS::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CIMPINJ_ENABLE_EXTENSIONS::CIMPINJ_ENABLE_EXTENSIONS (void)
{
    m_pType = &s_typeDescriptor;
  
}

CIMPINJ_ENABLE_EXTENSIONS::~CIMPINJ_ENABLE_EXTENSIONS (void)
{
}


CElement *
CIMPINJ_ENABLE_EXTENSIONS::s_construct (void)
{
    return (CElement *) new CIMPINJ_ENABLE_EXTENSIONS();
}


void
CIMPINJ_ENABLE_EXTENSIONS::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CIMPINJ_ENABLE_EXTENSIONS * pTarget = (CIMPINJ_ENABLE_EXTENSIONS *) pTargetElement;

  
    pDecoderStream->get_reserved(32);

}


void
CIMPINJ_ENABLE_EXTENSIONS::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CIMPINJ_ENABLE_EXTENSIONS::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CIMPINJ_ENABLE_EXTENSIONS::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CIMPINJ_ENABLE_EXTENSIONS::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_reserved(32);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Custom message IMPINJ_ENABLE_EXTENSIONS_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "IMPINJ_ENABLE_EXTENSIONS_RESPONSE",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    22,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::~CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void)
{
}


CElement *
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::s_construct (void)
{
    return (CElement *) new CIMPINJ_ENABLE_EXTENSIONS_RESPONSE();
}


void
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CIMPINJ_ENABLE_EXTENSIONS_RESPONSE * pTarget = (CIMPINJ_ENABLE_EXTENSIONS_RESPONSE *) pTargetElement;

  
}


void
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of LLRPStatus
    pType = &CLLRPStatus::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pLLRPStatus = (CLLRPStatus *)*Cur++;
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Custom message IMPINJ_SAVE_SETTINGS
**
*****************************************************************
*/
  

const CTypeDescriptor
CIMPINJ_SAVE_SETTINGS::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "IMPINJ_SAVE_SETTINGS",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    23,	// m_TypeNum
    &CIMPINJ_SAVE_SETTINGS_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CIMPINJ_SAVE_SETTINGS::s_apFieldDescriptorTable[] =
{
  
    &s_fdSaveConfiguration,
    NULL
};



const CFieldDescriptor
CIMPINJ_SAVE_SETTINGS::s_fdSaveConfiguration =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SaveConfiguration",	// m_pName
    NULL	// m_pEnumTable
};
CIMPINJ_SAVE_SETTINGS::CIMPINJ_SAVE_SETTINGS (void)
{
    m_pType = &s_typeDescriptor;
  
    m_SaveConfiguration = 0;
}

CIMPINJ_SAVE_SETTINGS::~CIMPINJ_SAVE_SETTINGS (void)
{
}


CElement *
CIMPINJ_SAVE_SETTINGS::s_construct (void)
{
    return (CElement *) new CIMPINJ_SAVE_SETTINGS();
}


void
CIMPINJ_SAVE_SETTINGS::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CIMPINJ_SAVE_SETTINGS * pTarget = (CIMPINJ_SAVE_SETTINGS *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_SaveConfiguration = pDecoderStream->get_u1(&s_fdSaveConfiguration);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdSaveConfiguration);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CIMPINJ_SAVE_SETTINGS::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CIMPINJ_SAVE_SETTINGS::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CIMPINJ_SAVE_SETTINGS::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CIMPINJ_SAVE_SETTINGS::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_SaveConfiguration, &s_fdSaveConfiguration);

    pEncoderStream->put_reserved(7);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Custom message IMPINJ_SAVE_SETTINGS_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CIMPINJ_SAVE_SETTINGS_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "IMPINJ_SAVE_SETTINGS_RESPONSE",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    24,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CIMPINJ_SAVE_SETTINGS_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CIMPINJ_SAVE_SETTINGS_RESPONSE::CIMPINJ_SAVE_SETTINGS_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CIMPINJ_SAVE_SETTINGS_RESPONSE::~CIMPINJ_SAVE_SETTINGS_RESPONSE (void)
{
}


CElement *
CIMPINJ_SAVE_SETTINGS_RESPONSE::s_construct (void)
{
    return (CElement *) new CIMPINJ_SAVE_SETTINGS_RESPONSE();
}


void
CIMPINJ_SAVE_SETTINGS_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CIMPINJ_SAVE_SETTINGS_RESPONSE * pTarget = (CIMPINJ_SAVE_SETTINGS_RESPONSE *) pTargetElement;

  
}


void
CIMPINJ_SAVE_SETTINGS_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CIMPINJ_SAVE_SETTINGS_RESPONSE::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of LLRPStatus
    pType = &CLLRPStatus::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pLLRPStatus = (CLLRPStatus *)*Cur++;
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CIMPINJ_SAVE_SETTINGS_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CIMPINJ_SAVE_SETTINGS_RESPONSE::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CIMPINJ_SAVE_SETTINGS_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Custom parameter ImpinjRequestedData
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjRequestedData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjRequestedData",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    21,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjRequestedData::s_apFieldDescriptorTable[] =
{
  
    &s_fdRequestedData,
    NULL
};



const CFieldDescriptor
CImpinjRequestedData::s_fdRequestedData =
{
    CFieldDescriptor::FT_E32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RequestedData",	// m_pName
    g_estImpinjRequestedDataType	// m_pEnumTable
};
CImpinjRequestedData::CImpinjRequestedData (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eRequestedData = (EImpinjRequestedDataType) 0;
}

CImpinjRequestedData::~CImpinjRequestedData (void)
{
}


CElement *
CImpinjRequestedData::s_construct (void)
{
    return (CElement *) new CImpinjRequestedData();
}


void
CImpinjRequestedData::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjRequestedData * pTarget = (CImpinjRequestedData *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eRequestedData = (EImpinjRequestedDataType) pDecoderStream->get_e32(&s_fdRequestedData);
    }
    else
    {
        pDecoderStream->get_e32(&s_fdRequestedData);
    }

}


void
CImpinjRequestedData::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjRequestedData::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjRequestedData::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjRequestedData::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e32((int)m_eRequestedData, &s_fdRequestedData);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjRequestedData::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CAPABILITIES::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CGET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjSubRegulatoryRegion
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjSubRegulatoryRegion::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjSubRegulatoryRegion",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    22,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjSubRegulatoryRegion::s_apFieldDescriptorTable[] =
{
  
    &s_fdRegulatoryRegion,
    NULL
};



const CFieldDescriptor
CImpinjSubRegulatoryRegion::s_fdRegulatoryRegion =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RegulatoryRegion",	// m_pName
    g_estImpinjRegulatoryRegion	// m_pEnumTable
};
CImpinjSubRegulatoryRegion::CImpinjSubRegulatoryRegion (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eRegulatoryRegion = (EImpinjRegulatoryRegion) 0;
}

CImpinjSubRegulatoryRegion::~CImpinjSubRegulatoryRegion (void)
{
}


CElement *
CImpinjSubRegulatoryRegion::s_construct (void)
{
    return (CElement *) new CImpinjSubRegulatoryRegion();
}


void
CImpinjSubRegulatoryRegion::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjSubRegulatoryRegion * pTarget = (CImpinjSubRegulatoryRegion *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eRegulatoryRegion = (EImpinjRegulatoryRegion) pDecoderStream->get_e16(&s_fdRegulatoryRegion);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdRegulatoryRegion);
    }

}


void
CImpinjSubRegulatoryRegion::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjSubRegulatoryRegion::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjSubRegulatoryRegion::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjSubRegulatoryRegion::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eRegulatoryRegion, &s_fdRegulatoryRegion);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjSubRegulatoryRegion::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CSET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjInventorySearchMode
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjInventorySearchMode::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjInventorySearchMode",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    23,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjInventorySearchMode::s_apFieldDescriptorTable[] =
{
  
    &s_fdInventorySearchMode,
    NULL
};



const CFieldDescriptor
CImpinjInventorySearchMode::s_fdInventorySearchMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "InventorySearchMode",	// m_pName
    g_estImpinjInventorySearchType	// m_pEnumTable
};
CImpinjInventorySearchMode::CImpinjInventorySearchMode (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eInventorySearchMode = (EImpinjInventorySearchType) 0;
}

CImpinjInventorySearchMode::~CImpinjInventorySearchMode (void)
{
}


CElement *
CImpinjInventorySearchMode::s_construct (void)
{
    return (CElement *) new CImpinjInventorySearchMode();
}


void
CImpinjInventorySearchMode::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjInventorySearchMode * pTarget = (CImpinjInventorySearchMode *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eInventorySearchMode = (EImpinjInventorySearchType) pDecoderStream->get_e16(&s_fdInventorySearchMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdInventorySearchMode);
    }

}


void
CImpinjInventorySearchMode::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjInventorySearchMode::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjInventorySearchMode::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjInventorySearchMode::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eInventorySearchMode, &s_fdInventorySearchMode);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjInventorySearchMode::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CC1G2InventoryCommand::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjTagDirectionReporting
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjTagDirectionReporting::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjTagDirectionReporting",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    24,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjTagDirectionReporting::s_apFieldDescriptorTable[] =
{
  
    &s_fdEnableTagDirection,
    &s_fdAntennaConfiguration,
    NULL
};



const CFieldDescriptor
CImpinjTagDirectionReporting::s_fdEnableTagDirection =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableTagDirection",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjTagDirectionReporting::s_fdAntennaConfiguration =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaConfiguration",	// m_pName
    g_estImpinjTagDirectionAntennaConfiguration	// m_pEnumTable
};
CImpinjTagDirectionReporting::CImpinjTagDirectionReporting (void)
{
    m_pType = &s_typeDescriptor;
  
    m_EnableTagDirection = 0;
    m_eAntennaConfiguration = (EImpinjTagDirectionAntennaConfiguration) 0;
}

CImpinjTagDirectionReporting::~CImpinjTagDirectionReporting (void)
{
}


CElement *
CImpinjTagDirectionReporting::s_construct (void)
{
    return (CElement *) new CImpinjTagDirectionReporting();
}


void
CImpinjTagDirectionReporting::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjTagDirectionReporting * pTarget = (CImpinjTagDirectionReporting *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_EnableTagDirection = pDecoderStream->get_u1(&s_fdEnableTagDirection);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableTagDirection);
    }
    
    pDecoderStream->get_reserved(15);

    if(NULL != pTarget)
    {
        pTarget->m_eAntennaConfiguration = (EImpinjTagDirectionAntennaConfiguration) pDecoderStream->get_e16(&s_fdAntennaConfiguration);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdAntennaConfiguration);
    }

    pDecoderStream->get_reserved(32);

}


void
CImpinjTagDirectionReporting::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjTagDirectionReporting::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjTagDirectionReporting::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjTagDirectionReporting::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_EnableTagDirection, &s_fdEnableTagDirection);

    pEncoderStream->put_reserved(15);

    pEncoderStream->put_e16((int)m_eAntennaConfiguration, &s_fdAntennaConfiguration);

    pEncoderStream->put_reserved(32);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjTagDirectionReporting::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CROReportSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjTagDirection
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjTagDirection::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjTagDirection",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    25,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjTagDirection::s_apFieldDescriptorTable[] =
{
  
    &s_fdDecisionTimestamp,
    &s_fdTagDirection,
    &s_fdConfidence,
    NULL
};



const CFieldDescriptor
CImpinjTagDirection::s_fdDecisionTimestamp =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_DATETIME,	// m_eFieldFormat
    "DecisionTimestamp",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjTagDirection::s_fdTagDirection =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TagDirection",	// m_pName
    g_estImpinjDirection	// m_pEnumTable
};


const CFieldDescriptor
CImpinjTagDirection::s_fdConfidence =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Confidence",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjTagDirection::CImpinjTagDirection (void)
{
    m_pType = &s_typeDescriptor;
  
    m_DecisionTimestamp = 0;
    m_eTagDirection = (EImpinjDirection) 0;
    m_Confidence = 0;
}

CImpinjTagDirection::~CImpinjTagDirection (void)
{
}


CElement *
CImpinjTagDirection::s_construct (void)
{
    return (CElement *) new CImpinjTagDirection();
}


void
CImpinjTagDirection::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjTagDirection * pTarget = (CImpinjTagDirection *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_DecisionTimestamp = pDecoderStream->get_u64(&s_fdDecisionTimestamp);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdDecisionTimestamp);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eTagDirection = (EImpinjDirection) pDecoderStream->get_e16(&s_fdTagDirection);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdTagDirection);
    }

    if(NULL != pTarget)
    {
        pTarget->m_Confidence = pDecoderStream->get_u16(&s_fdConfidence);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdConfidence);
    }
    
}


void
CImpinjTagDirection::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjTagDirection::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjTagDirection::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjTagDirection::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_DecisionTimestamp, &s_fdDecisionTimestamp);

    pEncoderStream->put_e16((int)m_eTagDirection, &s_fdTagDirection);

    pEncoderStream->put_u16(m_Confidence, &s_fdConfidence);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjTagDirection::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjFixedFrequencyList
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjFixedFrequencyList::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjFixedFrequencyList",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    26,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjFixedFrequencyList::s_apFieldDescriptorTable[] =
{
  
    &s_fdFixedFrequencyMode,
    &s_fdChannelList,
    NULL
};



const CFieldDescriptor
CImpinjFixedFrequencyList::s_fdFixedFrequencyMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "FixedFrequencyMode",	// m_pName
    g_estImpinjFixedFrequencyMode	// m_pEnumTable
};


const CFieldDescriptor
CImpinjFixedFrequencyList::s_fdChannelList =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ChannelList",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjFixedFrequencyList::CImpinjFixedFrequencyList (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eFixedFrequencyMode = (EImpinjFixedFrequencyMode) 0;
}

CImpinjFixedFrequencyList::~CImpinjFixedFrequencyList (void)
{
}


CElement *
CImpinjFixedFrequencyList::s_construct (void)
{
    return (CElement *) new CImpinjFixedFrequencyList();
}


void
CImpinjFixedFrequencyList::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjFixedFrequencyList * pTarget = (CImpinjFixedFrequencyList *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eFixedFrequencyMode = (EImpinjFixedFrequencyMode) pDecoderStream->get_e16(&s_fdFixedFrequencyMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdFixedFrequencyMode);
    }

    pDecoderStream->get_reserved(16);

    if(NULL != pTarget)
    {
        pTarget->m_ChannelList = pDecoderStream->get_u16v(&s_fdChannelList);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdChannelList);
    }
    
}


void
CImpinjFixedFrequencyList::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjFixedFrequencyList::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjFixedFrequencyList::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjFixedFrequencyList::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eFixedFrequencyMode, &s_fdFixedFrequencyMode);

    pEncoderStream->put_reserved(16);

    pEncoderStream->put_u16v(m_ChannelList, &s_fdChannelList);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjFixedFrequencyList::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CC1G2InventoryCommand::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjReducedPowerFrequencyList
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjReducedPowerFrequencyList::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjReducedPowerFrequencyList",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    27,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjReducedPowerFrequencyList::s_apFieldDescriptorTable[] =
{
  
    &s_fdReducedPowerMode,
    &s_fdChannelList,
    NULL
};



const CFieldDescriptor
CImpinjReducedPowerFrequencyList::s_fdReducedPowerMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReducedPowerMode",	// m_pName
    g_estImpinjReducedPowerMode	// m_pEnumTable
};


const CFieldDescriptor
CImpinjReducedPowerFrequencyList::s_fdChannelList =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ChannelList",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjReducedPowerFrequencyList::CImpinjReducedPowerFrequencyList (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eReducedPowerMode = (EImpinjReducedPowerMode) 0;
}

CImpinjReducedPowerFrequencyList::~CImpinjReducedPowerFrequencyList (void)
{
}


CElement *
CImpinjReducedPowerFrequencyList::s_construct (void)
{
    return (CElement *) new CImpinjReducedPowerFrequencyList();
}


void
CImpinjReducedPowerFrequencyList::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjReducedPowerFrequencyList * pTarget = (CImpinjReducedPowerFrequencyList *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eReducedPowerMode = (EImpinjReducedPowerMode) pDecoderStream->get_e16(&s_fdReducedPowerMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdReducedPowerMode);
    }

    pDecoderStream->get_reserved(16);

    if(NULL != pTarget)
    {
        pTarget->m_ChannelList = pDecoderStream->get_u16v(&s_fdChannelList);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdChannelList);
    }
    
}


void
CImpinjReducedPowerFrequencyList::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjReducedPowerFrequencyList::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjReducedPowerFrequencyList::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjReducedPowerFrequencyList::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eReducedPowerMode, &s_fdReducedPowerMode);

    pEncoderStream->put_reserved(16);

    pEncoderStream->put_u16v(m_ChannelList, &s_fdChannelList);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjReducedPowerFrequencyList::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CC1G2InventoryCommand::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjLowDutyCycle
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjLowDutyCycle::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjLowDutyCycle",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    28,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjLowDutyCycle::s_apFieldDescriptorTable[] =
{
  
    &s_fdLowDutyCycleMode,
    &s_fdEmptyFieldTimeout,
    &s_fdFieldPingInterval,
    NULL
};



const CFieldDescriptor
CImpinjLowDutyCycle::s_fdLowDutyCycleMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "LowDutyCycleMode",	// m_pName
    g_estImpinjLowDutyCycleMode	// m_pEnumTable
};


const CFieldDescriptor
CImpinjLowDutyCycle::s_fdEmptyFieldTimeout =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EmptyFieldTimeout",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjLowDutyCycle::s_fdFieldPingInterval =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "FieldPingInterval",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjLowDutyCycle::CImpinjLowDutyCycle (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eLowDutyCycleMode = (EImpinjLowDutyCycleMode) 0;
    m_EmptyFieldTimeout = 0;
    m_FieldPingInterval = 0;
}

CImpinjLowDutyCycle::~CImpinjLowDutyCycle (void)
{
}


CElement *
CImpinjLowDutyCycle::s_construct (void)
{
    return (CElement *) new CImpinjLowDutyCycle();
}


void
CImpinjLowDutyCycle::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjLowDutyCycle * pTarget = (CImpinjLowDutyCycle *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eLowDutyCycleMode = (EImpinjLowDutyCycleMode) pDecoderStream->get_e16(&s_fdLowDutyCycleMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdLowDutyCycleMode);
    }

    if(NULL != pTarget)
    {
        pTarget->m_EmptyFieldTimeout = pDecoderStream->get_u16(&s_fdEmptyFieldTimeout);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdEmptyFieldTimeout);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_FieldPingInterval = pDecoderStream->get_u16(&s_fdFieldPingInterval);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdFieldPingInterval);
    }
    
}


void
CImpinjLowDutyCycle::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjLowDutyCycle::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjLowDutyCycle::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjLowDutyCycle::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eLowDutyCycleMode, &s_fdLowDutyCycleMode);

    pEncoderStream->put_u16(m_EmptyFieldTimeout, &s_fdEmptyFieldTimeout);

    pEncoderStream->put_u16(m_FieldPingInterval, &s_fdFieldPingInterval);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjLowDutyCycle::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CC1G2InventoryCommand::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjDetailedVersion
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjDetailedVersion::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjDetailedVersion",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    29,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjDetailedVersion::s_apFieldDescriptorTable[] =
{
  
    &s_fdModelName,
    &s_fdSerialNumber,
    &s_fdSoftwareVersion,
    &s_fdFirmwareVersion,
    &s_fdFPGAVersion,
    &s_fdPCBAVersion,
    NULL
};



const CFieldDescriptor
CImpinjDetailedVersion::s_fdModelName =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ModelName",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjDetailedVersion::s_fdSerialNumber =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SerialNumber",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjDetailedVersion::s_fdSoftwareVersion =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SoftwareVersion",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjDetailedVersion::s_fdFirmwareVersion =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "FirmwareVersion",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjDetailedVersion::s_fdFPGAVersion =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "FPGAVersion",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjDetailedVersion::s_fdPCBAVersion =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PCBAVersion",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjDetailedVersion::CImpinjDetailedVersion (void)
{
    m_pType = &s_typeDescriptor;
  
}

CImpinjDetailedVersion::~CImpinjDetailedVersion (void)
{
}


CElement *
CImpinjDetailedVersion::s_construct (void)
{
    return (CElement *) new CImpinjDetailedVersion();
}


void
CImpinjDetailedVersion::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjDetailedVersion * pTarget = (CImpinjDetailedVersion *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ModelName = pDecoderStream->get_utf8v(&s_fdModelName);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdModelName);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_SerialNumber = pDecoderStream->get_utf8v(&s_fdSerialNumber);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdSerialNumber);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_SoftwareVersion = pDecoderStream->get_utf8v(&s_fdSoftwareVersion);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdSoftwareVersion);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_FirmwareVersion = pDecoderStream->get_utf8v(&s_fdFirmwareVersion);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdFirmwareVersion);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_FPGAVersion = pDecoderStream->get_utf8v(&s_fdFPGAVersion);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdFPGAVersion);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_PCBAVersion = pDecoderStream->get_utf8v(&s_fdPCBAVersion);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdPCBAVersion);
    }
    
}


void
CImpinjDetailedVersion::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjDetailedVersion::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjDetailedVersion::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjDetailedVersion::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_utf8v(m_ModelName, &s_fdModelName);

    pEncoderStream->put_utf8v(m_SerialNumber, &s_fdSerialNumber);

    pEncoderStream->put_utf8v(m_SoftwareVersion, &s_fdSoftwareVersion);

    pEncoderStream->put_utf8v(m_FirmwareVersion, &s_fdFirmwareVersion);

    pEncoderStream->put_utf8v(m_FPGAVersion, &s_fdFPGAVersion);

    pEncoderStream->put_utf8v(m_PCBAVersion, &s_fdPCBAVersion);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjDetailedVersion::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CAPABILITIES_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjFrequencyCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjFrequencyCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjFrequencyCapabilities",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    30,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjFrequencyCapabilities::s_apFieldDescriptorTable[] =
{
  
    &s_fdFrequencyList,
    NULL
};



const CFieldDescriptor
CImpinjFrequencyCapabilities::s_fdFrequencyList =
{
    CFieldDescriptor::FT_U32V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "FrequencyList",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjFrequencyCapabilities::CImpinjFrequencyCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
}

CImpinjFrequencyCapabilities::~CImpinjFrequencyCapabilities (void)
{
}


CElement *
CImpinjFrequencyCapabilities::s_construct (void)
{
    return (CElement *) new CImpinjFrequencyCapabilities();
}


void
CImpinjFrequencyCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjFrequencyCapabilities * pTarget = (CImpinjFrequencyCapabilities *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_FrequencyList = pDecoderStream->get_u32v(&s_fdFrequencyList);
    }
    else
    {
        pDecoderStream->get_u32v(&s_fdFrequencyList);
    }
    
}


void
CImpinjFrequencyCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjFrequencyCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjFrequencyCapabilities::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjFrequencyCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32v(m_FrequencyList, &s_fdFrequencyList);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjFrequencyCapabilities::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CAPABILITIES_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjTagInformation
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjTagInformation::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjTagInformation",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    31,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjTagInformation::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CImpinjTagInformation::CImpinjTagInformation (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pEPCData = NULL;
    m_pImpinjTagDirection = NULL;
}

CImpinjTagInformation::~CImpinjTagInformation (void)
{
}


CElement *
CImpinjTagInformation::s_construct (void)
{
    return (CElement *) new CImpinjTagInformation();
}


void
CImpinjTagInformation::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjTagInformation * pTarget = (CImpinjTagInformation *) pTargetElement;

  
}


void
CImpinjTagInformation::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjTagInformation::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of EPCData
    pType = &CEPCData::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pEPCData = (CEPCData *)*Cur++;
    

    // 0-1 of ImpinjTagDirection
    pType = &CImpinjTagDirection::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjTagDirection = (CImpinjTagDirection *)*Cur++;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjTagInformation::setEPCData (
  CEPCData *     pValue)
{
    removeSubParameterFromAllList(m_pEPCData);
    delete m_pEPCData;
    m_pEPCData = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjTagInformation::setImpinjTagDirection (
  CImpinjTagDirection *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjTagDirection);
    delete m_pImpinjTagDirection;
    m_pImpinjTagDirection = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjTagInformation::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjTagInformation::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CEPCData::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pEPCData, pType);
      
    pType = &CImpinjTagDirection::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjTagDirection, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjTagInformation::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CRO_ACCESS_REPORT::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjForkliftConfiguration
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjForkliftConfiguration::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjForkliftConfiguration",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    32,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjForkliftConfiguration::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CImpinjForkliftConfiguration::CImpinjForkliftConfiguration (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pImpinjForkliftHeightThreshold = NULL;
    m_pImpinjForkliftZeroMotionTimeThreshold = NULL;
}

CImpinjForkliftConfiguration::~CImpinjForkliftConfiguration (void)
{
}


CElement *
CImpinjForkliftConfiguration::s_construct (void)
{
    return (CElement *) new CImpinjForkliftConfiguration();
}


void
CImpinjForkliftConfiguration::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjForkliftConfiguration * pTarget = (CImpinjForkliftConfiguration *) pTargetElement;

  
}


void
CImpinjForkliftConfiguration::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjForkliftConfiguration::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ImpinjForkliftHeightThreshold
    pType = &CImpinjForkliftHeightThreshold::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjForkliftHeightThreshold = (CImpinjForkliftHeightThreshold *)*Cur++;
    }
    

    // 0-1 of ImpinjForkliftZeroMotionTimeThreshold
    pType = &CImpinjForkliftZeroMotionTimeThreshold::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjForkliftZeroMotionTimeThreshold = (CImpinjForkliftZeroMotionTimeThreshold *)*Cur++;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjForkliftConfiguration::setImpinjForkliftHeightThreshold (
  CImpinjForkliftHeightThreshold *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjForkliftHeightThreshold);
    delete m_pImpinjForkliftHeightThreshold;
    m_pImpinjForkliftHeightThreshold = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjForkliftConfiguration::setImpinjForkliftZeroMotionTimeThreshold (
  CImpinjForkliftZeroMotionTimeThreshold *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjForkliftZeroMotionTimeThreshold);
    delete m_pImpinjForkliftZeroMotionTimeThreshold;
    m_pImpinjForkliftZeroMotionTimeThreshold = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjForkliftConfiguration::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjForkliftConfiguration::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CImpinjForkliftHeightThreshold::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjForkliftHeightThreshold, pType);
      
    pType = &CImpinjForkliftZeroMotionTimeThreshold::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjForkliftZeroMotionTimeThreshold, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjForkliftConfiguration::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CSET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjForkliftHeightThreshold
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjForkliftHeightThreshold::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjForkliftHeightThreshold",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    33,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjForkliftHeightThreshold::s_apFieldDescriptorTable[] =
{
  
    &s_fdHeightThreshold,
    NULL
};



const CFieldDescriptor
CImpinjForkliftHeightThreshold::s_fdHeightThreshold =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "HeightThreshold",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjForkliftHeightThreshold::CImpinjForkliftHeightThreshold (void)
{
    m_pType = &s_typeDescriptor;
  
    m_HeightThreshold = 0;
}

CImpinjForkliftHeightThreshold::~CImpinjForkliftHeightThreshold (void)
{
}


CElement *
CImpinjForkliftHeightThreshold::s_construct (void)
{
    return (CElement *) new CImpinjForkliftHeightThreshold();
}


void
CImpinjForkliftHeightThreshold::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjForkliftHeightThreshold * pTarget = (CImpinjForkliftHeightThreshold *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_HeightThreshold = pDecoderStream->get_u16(&s_fdHeightThreshold);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdHeightThreshold);
    }
    
}


void
CImpinjForkliftHeightThreshold::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjForkliftHeightThreshold::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjForkliftHeightThreshold::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjForkliftHeightThreshold::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_HeightThreshold, &s_fdHeightThreshold);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjForkliftHeightThreshold::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjForkliftZeroMotionTimeThreshold
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjForkliftZeroMotionTimeThreshold::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjForkliftZeroMotionTimeThreshold",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    34,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjForkliftZeroMotionTimeThreshold::s_apFieldDescriptorTable[] =
{
  
    &s_fdZeroMotionTimeThreshold,
    NULL
};



const CFieldDescriptor
CImpinjForkliftZeroMotionTimeThreshold::s_fdZeroMotionTimeThreshold =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ZeroMotionTimeThreshold",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjForkliftZeroMotionTimeThreshold::CImpinjForkliftZeroMotionTimeThreshold (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ZeroMotionTimeThreshold = 0;
}

CImpinjForkliftZeroMotionTimeThreshold::~CImpinjForkliftZeroMotionTimeThreshold (void)
{
}


CElement *
CImpinjForkliftZeroMotionTimeThreshold::s_construct (void)
{
    return (CElement *) new CImpinjForkliftZeroMotionTimeThreshold();
}


void
CImpinjForkliftZeroMotionTimeThreshold::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjForkliftZeroMotionTimeThreshold * pTarget = (CImpinjForkliftZeroMotionTimeThreshold *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ZeroMotionTimeThreshold = pDecoderStream->get_u16(&s_fdZeroMotionTimeThreshold);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdZeroMotionTimeThreshold);
    }
    
}


void
CImpinjForkliftZeroMotionTimeThreshold::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjForkliftZeroMotionTimeThreshold::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjForkliftZeroMotionTimeThreshold::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjForkliftZeroMotionTimeThreshold::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_ZeroMotionTimeThreshold, &s_fdZeroMotionTimeThreshold);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjForkliftZeroMotionTimeThreshold::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjForkliftCompanionBoardInfo
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjForkliftCompanionBoardInfo::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjForkliftCompanionBoardInfo",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    35,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjForkliftCompanionBoardInfo::s_apFieldDescriptorTable[] =
{
  
    &s_fdBoardManufacturer,
    &s_fdFirmwareVersion,
    &s_fdHardwareVersion,
    NULL
};



const CFieldDescriptor
CImpinjForkliftCompanionBoardInfo::s_fdBoardManufacturer =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "BoardManufacturer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjForkliftCompanionBoardInfo::s_fdFirmwareVersion =
{
    CFieldDescriptor::FT_U8V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "FirmwareVersion",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjForkliftCompanionBoardInfo::s_fdHardwareVersion =
{
    CFieldDescriptor::FT_U8V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "HardwareVersion",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjForkliftCompanionBoardInfo::CImpinjForkliftCompanionBoardInfo (void)
{
    m_pType = &s_typeDescriptor;
  
}

CImpinjForkliftCompanionBoardInfo::~CImpinjForkliftCompanionBoardInfo (void)
{
}


CElement *
CImpinjForkliftCompanionBoardInfo::s_construct (void)
{
    return (CElement *) new CImpinjForkliftCompanionBoardInfo();
}


void
CImpinjForkliftCompanionBoardInfo::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjForkliftCompanionBoardInfo * pTarget = (CImpinjForkliftCompanionBoardInfo *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_BoardManufacturer = pDecoderStream->get_utf8v(&s_fdBoardManufacturer);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdBoardManufacturer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_FirmwareVersion = pDecoderStream->get_u8v(&s_fdFirmwareVersion);
    }
    else
    {
        pDecoderStream->get_u8v(&s_fdFirmwareVersion);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_HardwareVersion = pDecoderStream->get_u8v(&s_fdHardwareVersion);
    }
    else
    {
        pDecoderStream->get_u8v(&s_fdHardwareVersion);
    }
    
}


void
CImpinjForkliftCompanionBoardInfo::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjForkliftCompanionBoardInfo::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjForkliftCompanionBoardInfo::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjForkliftCompanionBoardInfo::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_utf8v(m_BoardManufacturer, &s_fdBoardManufacturer);

    pEncoderStream->put_u8v(m_FirmwareVersion, &s_fdFirmwareVersion);

    pEncoderStream->put_u8v(m_HardwareVersion, &s_fdHardwareVersion);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjForkliftCompanionBoardInfo::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CAPABILITIES_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGPIDebounceConfiguration
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGPIDebounceConfiguration::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGPIDebounceConfiguration",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    36,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGPIDebounceConfiguration::s_apFieldDescriptorTable[] =
{
  
    &s_fdGPIPortNum,
    &s_fdGPIDebounceTimerMSec,
    NULL
};



const CFieldDescriptor
CImpinjGPIDebounceConfiguration::s_fdGPIPortNum =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIPortNum",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGPIDebounceConfiguration::s_fdGPIDebounceTimerMSec =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIDebounceTimerMSec",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjGPIDebounceConfiguration::CImpinjGPIDebounceConfiguration (void)
{
    m_pType = &s_typeDescriptor;
  
    m_GPIPortNum = 0;
    m_GPIDebounceTimerMSec = 0;
}

CImpinjGPIDebounceConfiguration::~CImpinjGPIDebounceConfiguration (void)
{
}


CElement *
CImpinjGPIDebounceConfiguration::s_construct (void)
{
    return (CElement *) new CImpinjGPIDebounceConfiguration();
}


void
CImpinjGPIDebounceConfiguration::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGPIDebounceConfiguration * pTarget = (CImpinjGPIDebounceConfiguration *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_GPIPortNum = pDecoderStream->get_u16(&s_fdGPIPortNum);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdGPIPortNum);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_GPIDebounceTimerMSec = pDecoderStream->get_u32(&s_fdGPIDebounceTimerMSec);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdGPIDebounceTimerMSec);
    }
    
}


void
CImpinjGPIDebounceConfiguration::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGPIDebounceConfiguration::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGPIDebounceConfiguration::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGPIDebounceConfiguration::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_GPIPortNum, &s_fdGPIPortNum);

    pEncoderStream->put_u32(m_GPIDebounceTimerMSec, &s_fdGPIDebounceTimerMSec);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGPIDebounceConfiguration::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CSET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjReaderTemperature
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjReaderTemperature::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjReaderTemperature",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    37,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjReaderTemperature::s_apFieldDescriptorTable[] =
{
  
    &s_fdTemperature,
    NULL
};



const CFieldDescriptor
CImpinjReaderTemperature::s_fdTemperature =
{
    CFieldDescriptor::FT_S16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Temperature",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjReaderTemperature::CImpinjReaderTemperature (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Temperature = 0;
}

CImpinjReaderTemperature::~CImpinjReaderTemperature (void)
{
}


CElement *
CImpinjReaderTemperature::s_construct (void)
{
    return (CElement *) new CImpinjReaderTemperature();
}


void
CImpinjReaderTemperature::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjReaderTemperature * pTarget = (CImpinjReaderTemperature *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Temperature = pDecoderStream->get_s16(&s_fdTemperature);
    }
    else
    {
        pDecoderStream->get_s16(&s_fdTemperature);
    }
    
}


void
CImpinjReaderTemperature::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjReaderTemperature::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjReaderTemperature::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjReaderTemperature::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_s16(m_Temperature, &s_fdTemperature);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjReaderTemperature::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjLinkMonitorConfiguration
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjLinkMonitorConfiguration::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjLinkMonitorConfiguration",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    38,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjLinkMonitorConfiguration::s_apFieldDescriptorTable[] =
{
  
    &s_fdLinkMonitorMode,
    &s_fdLinkDownThreshold,
    NULL
};



const CFieldDescriptor
CImpinjLinkMonitorConfiguration::s_fdLinkMonitorMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "LinkMonitorMode",	// m_pName
    g_estImpinjLinkMonitorMode	// m_pEnumTable
};


const CFieldDescriptor
CImpinjLinkMonitorConfiguration::s_fdLinkDownThreshold =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "LinkDownThreshold",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjLinkMonitorConfiguration::CImpinjLinkMonitorConfiguration (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eLinkMonitorMode = (EImpinjLinkMonitorMode) 0;
    m_LinkDownThreshold = 0;
}

CImpinjLinkMonitorConfiguration::~CImpinjLinkMonitorConfiguration (void)
{
}


CElement *
CImpinjLinkMonitorConfiguration::s_construct (void)
{
    return (CElement *) new CImpinjLinkMonitorConfiguration();
}


void
CImpinjLinkMonitorConfiguration::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjLinkMonitorConfiguration * pTarget = (CImpinjLinkMonitorConfiguration *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eLinkMonitorMode = (EImpinjLinkMonitorMode) pDecoderStream->get_e16(&s_fdLinkMonitorMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdLinkMonitorMode);
    }

    if(NULL != pTarget)
    {
        pTarget->m_LinkDownThreshold = pDecoderStream->get_u16(&s_fdLinkDownThreshold);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdLinkDownThreshold);
    }
    
}


void
CImpinjLinkMonitorConfiguration::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjLinkMonitorConfiguration::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjLinkMonitorConfiguration::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjLinkMonitorConfiguration::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eLinkMonitorMode, &s_fdLinkMonitorMode);

    pEncoderStream->put_u16(m_LinkDownThreshold, &s_fdLinkDownThreshold);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjLinkMonitorConfiguration::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CSET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjReportBufferConfiguration
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjReportBufferConfiguration::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjReportBufferConfiguration",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    39,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjReportBufferConfiguration::s_apFieldDescriptorTable[] =
{
  
    &s_fdReportBufferMode,
    NULL
};



const CFieldDescriptor
CImpinjReportBufferConfiguration::s_fdReportBufferMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReportBufferMode",	// m_pName
    g_estImpinjReportBufferMode	// m_pEnumTable
};
CImpinjReportBufferConfiguration::CImpinjReportBufferConfiguration (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eReportBufferMode = (EImpinjReportBufferMode) 0;
}

CImpinjReportBufferConfiguration::~CImpinjReportBufferConfiguration (void)
{
}


CElement *
CImpinjReportBufferConfiguration::s_construct (void)
{
    return (CElement *) new CImpinjReportBufferConfiguration();
}


void
CImpinjReportBufferConfiguration::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjReportBufferConfiguration * pTarget = (CImpinjReportBufferConfiguration *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eReportBufferMode = (EImpinjReportBufferMode) pDecoderStream->get_e16(&s_fdReportBufferMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdReportBufferMode);
    }

}


void
CImpinjReportBufferConfiguration::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjReportBufferConfiguration::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjReportBufferConfiguration::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjReportBufferConfiguration::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eReportBufferMode, &s_fdReportBufferMode);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjReportBufferConfiguration::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CSET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjAccessSpecConfiguration
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjAccessSpecConfiguration::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjAccessSpecConfiguration",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    40,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjAccessSpecConfiguration::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CImpinjAccessSpecConfiguration::CImpinjAccessSpecConfiguration (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pImpinjBlockWriteWordCount = NULL;
}

CImpinjAccessSpecConfiguration::~CImpinjAccessSpecConfiguration (void)
{
}


CElement *
CImpinjAccessSpecConfiguration::s_construct (void)
{
    return (CElement *) new CImpinjAccessSpecConfiguration();
}


void
CImpinjAccessSpecConfiguration::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjAccessSpecConfiguration * pTarget = (CImpinjAccessSpecConfiguration *) pTargetElement;

  
}


void
CImpinjAccessSpecConfiguration::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjAccessSpecConfiguration::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ImpinjBlockWriteWordCount
    pType = &CImpinjBlockWriteWordCount::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjBlockWriteWordCount = (CImpinjBlockWriteWordCount *)*Cur++;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjAccessSpecConfiguration::setImpinjBlockWriteWordCount (
  CImpinjBlockWriteWordCount *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjBlockWriteWordCount);
    delete m_pImpinjBlockWriteWordCount;
    m_pImpinjBlockWriteWordCount = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjAccessSpecConfiguration::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjAccessSpecConfiguration::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CImpinjBlockWriteWordCount::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjBlockWriteWordCount, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjAccessSpecConfiguration::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CSET_READER_CONFIG::s_typeDescriptor)
    {
        return TRUE;
    }
  
    if(pEnclosingElementType == &CAccessSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjBlockWriteWordCount
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjBlockWriteWordCount::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjBlockWriteWordCount",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    41,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjBlockWriteWordCount::s_apFieldDescriptorTable[] =
{
  
    &s_fdWordCount,
    NULL
};



const CFieldDescriptor
CImpinjBlockWriteWordCount::s_fdWordCount =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordCount",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjBlockWriteWordCount::CImpinjBlockWriteWordCount (void)
{
    m_pType = &s_typeDescriptor;
  
    m_WordCount = 0;
}

CImpinjBlockWriteWordCount::~CImpinjBlockWriteWordCount (void)
{
}


CElement *
CImpinjBlockWriteWordCount::s_construct (void)
{
    return (CElement *) new CImpinjBlockWriteWordCount();
}


void
CImpinjBlockWriteWordCount::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjBlockWriteWordCount * pTarget = (CImpinjBlockWriteWordCount *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_WordCount = pDecoderStream->get_u16(&s_fdWordCount);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdWordCount);
    }
    
}


void
CImpinjBlockWriteWordCount::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjBlockWriteWordCount::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjBlockWriteWordCount::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjBlockWriteWordCount::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_WordCount, &s_fdWordCount);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjBlockWriteWordCount::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjBlockPermalock
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjBlockPermalock::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjBlockPermalock",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    42,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjBlockPermalock::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdMB,
    &s_fdBlockPointer,
    &s_fdBlockMask,
    NULL
};



const CFieldDescriptor
CImpinjBlockPermalock::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjBlockPermalock::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjBlockPermalock::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjBlockPermalock::s_fdBlockPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "BlockPointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjBlockPermalock::s_fdBlockMask =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "BlockMask",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjBlockPermalock::CImpinjBlockPermalock (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_MB = 0;
    m_BlockPointer = 0;
}

CImpinjBlockPermalock::~CImpinjBlockPermalock (void)
{
}


CElement *
CImpinjBlockPermalock::s_construct (void)
{
    return (CElement *) new CImpinjBlockPermalock();
}


void
CImpinjBlockPermalock::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjBlockPermalock * pTarget = (CImpinjBlockPermalock *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AccessPassword = pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MB = pDecoderStream->get_u2(&s_fdMB);
    }
    else
    {
        pDecoderStream->get_u2(&s_fdMB);
    }
    
    pDecoderStream->get_reserved(6);

    if(NULL != pTarget)
    {
        pTarget->m_BlockPointer = pDecoderStream->get_u16(&s_fdBlockPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdBlockPointer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_BlockMask = pDecoderStream->get_u16v(&s_fdBlockMask);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdBlockMask);
    }
    
}


void
CImpinjBlockPermalock::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjBlockPermalock::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjBlockPermalock::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjBlockPermalock::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_BlockPointer, &s_fdBlockPointer);

    pEncoderStream->put_u16v(m_BlockMask, &s_fdBlockMask);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjBlockPermalock::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjBlockPermalockOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjBlockPermalockOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjBlockPermalockOpSpecResult",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    43,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjBlockPermalockOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    NULL
};



const CFieldDescriptor
CImpinjBlockPermalockOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estImpinjBlockPermalockResultType	// m_pEnumTable
};


const CFieldDescriptor
CImpinjBlockPermalockOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjBlockPermalockOpSpecResult::CImpinjBlockPermalockOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EImpinjBlockPermalockResultType) 0;
    m_OpSpecID = 0;
}

CImpinjBlockPermalockOpSpecResult::~CImpinjBlockPermalockOpSpecResult (void)
{
}


CElement *
CImpinjBlockPermalockOpSpecResult::s_construct (void)
{
    return (CElement *) new CImpinjBlockPermalockOpSpecResult();
}


void
CImpinjBlockPermalockOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjBlockPermalockOpSpecResult * pTarget = (CImpinjBlockPermalockOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EImpinjBlockPermalockResultType) pDecoderStream->get_e8(&s_fdResult);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdResult);
    }

    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
}


void
CImpinjBlockPermalockOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjBlockPermalockOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjBlockPermalockOpSpecResult::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjBlockPermalockOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjBlockPermalockOpSpecResult::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpecResult::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGetBlockPermalockStatus
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGetBlockPermalockStatus::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGetBlockPermalockStatus",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    44,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGetBlockPermalockStatus::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdMB,
    &s_fdBlockPointer,
    &s_fdBlockRange,
    NULL
};



const CFieldDescriptor
CImpinjGetBlockPermalockStatus::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetBlockPermalockStatus::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetBlockPermalockStatus::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetBlockPermalockStatus::s_fdBlockPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "BlockPointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetBlockPermalockStatus::s_fdBlockRange =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "BlockRange",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjGetBlockPermalockStatus::CImpinjGetBlockPermalockStatus (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_MB = 0;
    m_BlockPointer = 0;
    m_BlockRange = 0;
}

CImpinjGetBlockPermalockStatus::~CImpinjGetBlockPermalockStatus (void)
{
}


CElement *
CImpinjGetBlockPermalockStatus::s_construct (void)
{
    return (CElement *) new CImpinjGetBlockPermalockStatus();
}


void
CImpinjGetBlockPermalockStatus::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGetBlockPermalockStatus * pTarget = (CImpinjGetBlockPermalockStatus *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AccessPassword = pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MB = pDecoderStream->get_u2(&s_fdMB);
    }
    else
    {
        pDecoderStream->get_u2(&s_fdMB);
    }
    
    pDecoderStream->get_reserved(6);

    if(NULL != pTarget)
    {
        pTarget->m_BlockPointer = pDecoderStream->get_u16(&s_fdBlockPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdBlockPointer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_BlockRange = pDecoderStream->get_u16(&s_fdBlockRange);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdBlockRange);
    }
    
}


void
CImpinjGetBlockPermalockStatus::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGetBlockPermalockStatus::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGetBlockPermalockStatus::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGetBlockPermalockStatus::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_BlockPointer, &s_fdBlockPointer);

    pEncoderStream->put_u16(m_BlockRange, &s_fdBlockRange);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGetBlockPermalockStatus::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGetBlockPermalockStatusOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGetBlockPermalockStatusOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGetBlockPermalockStatusOpSpecResult",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    45,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGetBlockPermalockStatusOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    &s_fdPermalockStatus,
    NULL
};



const CFieldDescriptor
CImpinjGetBlockPermalockStatusOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estImpinjGetBlockPermalockStatusResultType	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetBlockPermalockStatusOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetBlockPermalockStatusOpSpecResult::s_fdPermalockStatus =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "PermalockStatus",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjGetBlockPermalockStatusOpSpecResult::CImpinjGetBlockPermalockStatusOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EImpinjGetBlockPermalockStatusResultType) 0;
    m_OpSpecID = 0;
}

CImpinjGetBlockPermalockStatusOpSpecResult::~CImpinjGetBlockPermalockStatusOpSpecResult (void)
{
}


CElement *
CImpinjGetBlockPermalockStatusOpSpecResult::s_construct (void)
{
    return (CElement *) new CImpinjGetBlockPermalockStatusOpSpecResult();
}


void
CImpinjGetBlockPermalockStatusOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGetBlockPermalockStatusOpSpecResult * pTarget = (CImpinjGetBlockPermalockStatusOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EImpinjGetBlockPermalockStatusResultType) pDecoderStream->get_e8(&s_fdResult);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdResult);
    }

    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_PermalockStatus = pDecoderStream->get_u16v(&s_fdPermalockStatus);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdPermalockStatus);
    }
    
}


void
CImpinjGetBlockPermalockStatusOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGetBlockPermalockStatusOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGetBlockPermalockStatusOpSpecResult::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGetBlockPermalockStatusOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u16v(m_PermalockStatus, &s_fdPermalockStatus);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGetBlockPermalockStatusOpSpecResult::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpecResult::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjSetQTConfig
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjSetQTConfig::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjSetQTConfig",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    46,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjSetQTConfig::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdDataProfile,
    &s_fdAccessRange,
    &s_fdPersistence,
    NULL
};



const CFieldDescriptor
CImpinjSetQTConfig::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjSetQTConfig::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjSetQTConfig::s_fdDataProfile =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DataProfile",	// m_pName
    g_estImpinjQTDataProfile	// m_pEnumTable
};


const CFieldDescriptor
CImpinjSetQTConfig::s_fdAccessRange =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessRange",	// m_pName
    g_estImpinjQTAccessRange	// m_pEnumTable
};


const CFieldDescriptor
CImpinjSetQTConfig::s_fdPersistence =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Persistence",	// m_pName
    g_estImpinjQTPersistence	// m_pEnumTable
};
CImpinjSetQTConfig::CImpinjSetQTConfig (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_eDataProfile = (EImpinjQTDataProfile) 0;
    m_eAccessRange = (EImpinjQTAccessRange) 0;
    m_ePersistence = (EImpinjQTPersistence) 0;
}

CImpinjSetQTConfig::~CImpinjSetQTConfig (void)
{
}


CElement *
CImpinjSetQTConfig::s_construct (void)
{
    return (CElement *) new CImpinjSetQTConfig();
}


void
CImpinjSetQTConfig::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjSetQTConfig * pTarget = (CImpinjSetQTConfig *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AccessPassword = pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eDataProfile = (EImpinjQTDataProfile) pDecoderStream->get_e8(&s_fdDataProfile);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdDataProfile);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eAccessRange = (EImpinjQTAccessRange) pDecoderStream->get_e8(&s_fdAccessRange);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAccessRange);
    }

    if(NULL != pTarget)
    {
        pTarget->m_ePersistence = (EImpinjQTPersistence) pDecoderStream->get_e8(&s_fdPersistence);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdPersistence);
    }

    pDecoderStream->get_reserved(32);

}


void
CImpinjSetQTConfig::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjSetQTConfig::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjSetQTConfig::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjSetQTConfig::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_e8((int)m_eDataProfile, &s_fdDataProfile);

    pEncoderStream->put_e8((int)m_eAccessRange, &s_fdAccessRange);

    pEncoderStream->put_e8((int)m_ePersistence, &s_fdPersistence);

    pEncoderStream->put_reserved(32);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjSetQTConfig::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjSetQTConfigOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjSetQTConfigOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjSetQTConfigOpSpecResult",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    47,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjSetQTConfigOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    NULL
};



const CFieldDescriptor
CImpinjSetQTConfigOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estImpinjSetQTConfigResultType	// m_pEnumTable
};


const CFieldDescriptor
CImpinjSetQTConfigOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjSetQTConfigOpSpecResult::CImpinjSetQTConfigOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EImpinjSetQTConfigResultType) 0;
    m_OpSpecID = 0;
}

CImpinjSetQTConfigOpSpecResult::~CImpinjSetQTConfigOpSpecResult (void)
{
}


CElement *
CImpinjSetQTConfigOpSpecResult::s_construct (void)
{
    return (CElement *) new CImpinjSetQTConfigOpSpecResult();
}


void
CImpinjSetQTConfigOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjSetQTConfigOpSpecResult * pTarget = (CImpinjSetQTConfigOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EImpinjSetQTConfigResultType) pDecoderStream->get_e8(&s_fdResult);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdResult);
    }

    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
}


void
CImpinjSetQTConfigOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjSetQTConfigOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjSetQTConfigOpSpecResult::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjSetQTConfigOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjSetQTConfigOpSpecResult::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpecResult::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGetQTConfig
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGetQTConfig::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGetQTConfig",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    48,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGetQTConfig::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    NULL
};



const CFieldDescriptor
CImpinjGetQTConfig::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetQTConfig::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjGetQTConfig::CImpinjGetQTConfig (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
}

CImpinjGetQTConfig::~CImpinjGetQTConfig (void)
{
}


CElement *
CImpinjGetQTConfig::s_construct (void)
{
    return (CElement *) new CImpinjGetQTConfig();
}


void
CImpinjGetQTConfig::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGetQTConfig * pTarget = (CImpinjGetQTConfig *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AccessPassword = pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessPassword);
    }
    
}


void
CImpinjGetQTConfig::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGetQTConfig::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGetQTConfig::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGetQTConfig::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGetQTConfig::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGetQTConfigOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGetQTConfigOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGetQTConfigOpSpecResult",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    49,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGetQTConfigOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    &s_fdDataProfile,
    &s_fdAccessRange,
    NULL
};



const CFieldDescriptor
CImpinjGetQTConfigOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estImpinjGetQTConfigResultType	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetQTConfigOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetQTConfigOpSpecResult::s_fdDataProfile =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DataProfile",	// m_pName
    g_estImpinjQTDataProfile	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGetQTConfigOpSpecResult::s_fdAccessRange =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessRange",	// m_pName
    g_estImpinjQTAccessRange	// m_pEnumTable
};
CImpinjGetQTConfigOpSpecResult::CImpinjGetQTConfigOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EImpinjGetQTConfigResultType) 0;
    m_OpSpecID = 0;
    m_eDataProfile = (EImpinjQTDataProfile) 0;
    m_eAccessRange = (EImpinjQTAccessRange) 0;
}

CImpinjGetQTConfigOpSpecResult::~CImpinjGetQTConfigOpSpecResult (void)
{
}


CElement *
CImpinjGetQTConfigOpSpecResult::s_construct (void)
{
    return (CElement *) new CImpinjGetQTConfigOpSpecResult();
}


void
CImpinjGetQTConfigOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGetQTConfigOpSpecResult * pTarget = (CImpinjGetQTConfigOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EImpinjGetQTConfigResultType) pDecoderStream->get_e8(&s_fdResult);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdResult);
    }

    if(NULL != pTarget)
    {
        pTarget->m_OpSpecID = pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOpSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eDataProfile = (EImpinjQTDataProfile) pDecoderStream->get_e8(&s_fdDataProfile);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdDataProfile);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eAccessRange = (EImpinjQTAccessRange) pDecoderStream->get_e8(&s_fdAccessRange);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAccessRange);
    }

    pDecoderStream->get_reserved(32);

}


void
CImpinjGetQTConfigOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGetQTConfigOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGetQTConfigOpSpecResult::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGetQTConfigOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_e8((int)m_eDataProfile, &s_fdDataProfile);

    pEncoderStream->put_e8((int)m_eAccessRange, &s_fdAccessRange);

    pEncoderStream->put_reserved(32);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGetQTConfigOpSpecResult::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CAccessCommandOpSpecResult::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjTagReportContentSelector
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjTagReportContentSelector::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjTagReportContentSelector",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    50,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjTagReportContentSelector::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CImpinjTagReportContentSelector::CImpinjTagReportContentSelector (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pImpinjEnableSerializedTID = NULL;
    m_pImpinjEnableRFPhaseAngle = NULL;
    m_pImpinjEnablePeakRSSI = NULL;
    m_pImpinjEnableGPSCoordinates = NULL;
}

CImpinjTagReportContentSelector::~CImpinjTagReportContentSelector (void)
{
}


CElement *
CImpinjTagReportContentSelector::s_construct (void)
{
    return (CElement *) new CImpinjTagReportContentSelector();
}


void
CImpinjTagReportContentSelector::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjTagReportContentSelector * pTarget = (CImpinjTagReportContentSelector *) pTargetElement;

  
}


void
CImpinjTagReportContentSelector::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjTagReportContentSelector::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ImpinjEnableSerializedTID
    pType = &CImpinjEnableSerializedTID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjEnableSerializedTID = (CImpinjEnableSerializedTID *)*Cur++;
    }
    

    // 0-1 of ImpinjEnableRFPhaseAngle
    pType = &CImpinjEnableRFPhaseAngle::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjEnableRFPhaseAngle = (CImpinjEnableRFPhaseAngle *)*Cur++;
    }
    

    // 0-1 of ImpinjEnablePeakRSSI
    pType = &CImpinjEnablePeakRSSI::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjEnablePeakRSSI = (CImpinjEnablePeakRSSI *)*Cur++;
    }
    

    // 0-1 of ImpinjEnableGPSCoordinates
    pType = &CImpinjEnableGPSCoordinates::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjEnableGPSCoordinates = (CImpinjEnableGPSCoordinates *)*Cur++;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjTagReportContentSelector::setImpinjEnableSerializedTID (
  CImpinjEnableSerializedTID *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjEnableSerializedTID);
    delete m_pImpinjEnableSerializedTID;
    m_pImpinjEnableSerializedTID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjTagReportContentSelector::setImpinjEnableRFPhaseAngle (
  CImpinjEnableRFPhaseAngle *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjEnableRFPhaseAngle);
    delete m_pImpinjEnableRFPhaseAngle;
    m_pImpinjEnableRFPhaseAngle = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjTagReportContentSelector::setImpinjEnablePeakRSSI (
  CImpinjEnablePeakRSSI *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjEnablePeakRSSI);
    delete m_pImpinjEnablePeakRSSI;
    m_pImpinjEnablePeakRSSI = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjTagReportContentSelector::setImpinjEnableGPSCoordinates (
  CImpinjEnableGPSCoordinates *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjEnableGPSCoordinates);
    delete m_pImpinjEnableGPSCoordinates;
    m_pImpinjEnableGPSCoordinates = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjTagReportContentSelector::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjTagReportContentSelector::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CImpinjEnableSerializedTID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjEnableSerializedTID, pType);
      
    pType = &CImpinjEnableRFPhaseAngle::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjEnableRFPhaseAngle, pType);
      
    pType = &CImpinjEnablePeakRSSI::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjEnablePeakRSSI, pType);
      
    pType = &CImpinjEnableGPSCoordinates::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjEnableGPSCoordinates, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjTagReportContentSelector::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CROReportSpec::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjEnableSerializedTID
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjEnableSerializedTID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjEnableSerializedTID",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    51,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjEnableSerializedTID::s_apFieldDescriptorTable[] =
{
  
    &s_fdSerializedTIDMode,
    NULL
};



const CFieldDescriptor
CImpinjEnableSerializedTID::s_fdSerializedTIDMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SerializedTIDMode",	// m_pName
    g_estImpinjSerializedTIDMode	// m_pEnumTable
};
CImpinjEnableSerializedTID::CImpinjEnableSerializedTID (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eSerializedTIDMode = (EImpinjSerializedTIDMode) 0;
}

CImpinjEnableSerializedTID::~CImpinjEnableSerializedTID (void)
{
}


CElement *
CImpinjEnableSerializedTID::s_construct (void)
{
    return (CElement *) new CImpinjEnableSerializedTID();
}


void
CImpinjEnableSerializedTID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjEnableSerializedTID * pTarget = (CImpinjEnableSerializedTID *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eSerializedTIDMode = (EImpinjSerializedTIDMode) pDecoderStream->get_e16(&s_fdSerializedTIDMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdSerializedTIDMode);
    }

}


void
CImpinjEnableSerializedTID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjEnableSerializedTID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjEnableSerializedTID::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjEnableSerializedTID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eSerializedTIDMode, &s_fdSerializedTIDMode);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjEnableSerializedTID::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjEnableRFPhaseAngle
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjEnableRFPhaseAngle::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjEnableRFPhaseAngle",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    52,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjEnableRFPhaseAngle::s_apFieldDescriptorTable[] =
{
  
    &s_fdRFPhaseAngleMode,
    NULL
};



const CFieldDescriptor
CImpinjEnableRFPhaseAngle::s_fdRFPhaseAngleMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RFPhaseAngleMode",	// m_pName
    g_estImpinjRFPhaseAngleMode	// m_pEnumTable
};
CImpinjEnableRFPhaseAngle::CImpinjEnableRFPhaseAngle (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eRFPhaseAngleMode = (EImpinjRFPhaseAngleMode) 0;
}

CImpinjEnableRFPhaseAngle::~CImpinjEnableRFPhaseAngle (void)
{
}


CElement *
CImpinjEnableRFPhaseAngle::s_construct (void)
{
    return (CElement *) new CImpinjEnableRFPhaseAngle();
}


void
CImpinjEnableRFPhaseAngle::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjEnableRFPhaseAngle * pTarget = (CImpinjEnableRFPhaseAngle *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eRFPhaseAngleMode = (EImpinjRFPhaseAngleMode) pDecoderStream->get_e16(&s_fdRFPhaseAngleMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdRFPhaseAngleMode);
    }

}


void
CImpinjEnableRFPhaseAngle::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjEnableRFPhaseAngle::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjEnableRFPhaseAngle::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjEnableRFPhaseAngle::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eRFPhaseAngleMode, &s_fdRFPhaseAngleMode);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjEnableRFPhaseAngle::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjEnablePeakRSSI
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjEnablePeakRSSI::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjEnablePeakRSSI",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    53,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjEnablePeakRSSI::s_apFieldDescriptorTable[] =
{
  
    &s_fdPeakRSSIMode,
    NULL
};



const CFieldDescriptor
CImpinjEnablePeakRSSI::s_fdPeakRSSIMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PeakRSSIMode",	// m_pName
    g_estImpinjPeakRSSIMode	// m_pEnumTable
};
CImpinjEnablePeakRSSI::CImpinjEnablePeakRSSI (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ePeakRSSIMode = (EImpinjPeakRSSIMode) 0;
}

CImpinjEnablePeakRSSI::~CImpinjEnablePeakRSSI (void)
{
}


CElement *
CImpinjEnablePeakRSSI::s_construct (void)
{
    return (CElement *) new CImpinjEnablePeakRSSI();
}


void
CImpinjEnablePeakRSSI::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjEnablePeakRSSI * pTarget = (CImpinjEnablePeakRSSI *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ePeakRSSIMode = (EImpinjPeakRSSIMode) pDecoderStream->get_e16(&s_fdPeakRSSIMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdPeakRSSIMode);
    }

}


void
CImpinjEnablePeakRSSI::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjEnablePeakRSSI::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjEnablePeakRSSI::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjEnablePeakRSSI::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_ePeakRSSIMode, &s_fdPeakRSSIMode);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjEnablePeakRSSI::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjEnableGPSCoordinates
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjEnableGPSCoordinates::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjEnableGPSCoordinates",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    54,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjEnableGPSCoordinates::s_apFieldDescriptorTable[] =
{
  
    &s_fdGPSCoordinatesMode,
    NULL
};



const CFieldDescriptor
CImpinjEnableGPSCoordinates::s_fdGPSCoordinatesMode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPSCoordinatesMode",	// m_pName
    g_estImpinjGPSCoordinatesMode	// m_pEnumTable
};
CImpinjEnableGPSCoordinates::CImpinjEnableGPSCoordinates (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eGPSCoordinatesMode = (EImpinjGPSCoordinatesMode) 0;
}

CImpinjEnableGPSCoordinates::~CImpinjEnableGPSCoordinates (void)
{
}


CElement *
CImpinjEnableGPSCoordinates::s_construct (void)
{
    return (CElement *) new CImpinjEnableGPSCoordinates();
}


void
CImpinjEnableGPSCoordinates::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjEnableGPSCoordinates * pTarget = (CImpinjEnableGPSCoordinates *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eGPSCoordinatesMode = (EImpinjGPSCoordinatesMode) pDecoderStream->get_e16(&s_fdGPSCoordinatesMode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdGPSCoordinatesMode);
    }

}


void
CImpinjEnableGPSCoordinates::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjEnableGPSCoordinates::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjEnableGPSCoordinates::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjEnableGPSCoordinates::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eGPSCoordinatesMode, &s_fdGPSCoordinatesMode);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjEnableGPSCoordinates::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjSerializedTID
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjSerializedTID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjSerializedTID",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    55,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjSerializedTID::s_apFieldDescriptorTable[] =
{
  
    &s_fdTID,
    NULL
};



const CFieldDescriptor
CImpinjSerializedTID::s_fdTID =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "TID",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjSerializedTID::CImpinjSerializedTID (void)
{
    m_pType = &s_typeDescriptor;
  
}

CImpinjSerializedTID::~CImpinjSerializedTID (void)
{
}


CElement *
CImpinjSerializedTID::s_construct (void)
{
    return (CElement *) new CImpinjSerializedTID();
}


void
CImpinjSerializedTID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjSerializedTID * pTarget = (CImpinjSerializedTID *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_TID = pDecoderStream->get_u16v(&s_fdTID);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdTID);
    }
    
}


void
CImpinjSerializedTID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjSerializedTID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjSerializedTID::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjSerializedTID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16v(m_TID, &s_fdTID);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjSerializedTID::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CTagReportData::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjRFPhaseAngle
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjRFPhaseAngle::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjRFPhaseAngle",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    56,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjRFPhaseAngle::s_apFieldDescriptorTable[] =
{
  
    &s_fdPhaseAngle,
    NULL
};



const CFieldDescriptor
CImpinjRFPhaseAngle::s_fdPhaseAngle =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PhaseAngle",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjRFPhaseAngle::CImpinjRFPhaseAngle (void)
{
    m_pType = &s_typeDescriptor;
  
    m_PhaseAngle = 0;
}

CImpinjRFPhaseAngle::~CImpinjRFPhaseAngle (void)
{
}


CElement *
CImpinjRFPhaseAngle::s_construct (void)
{
    return (CElement *) new CImpinjRFPhaseAngle();
}


void
CImpinjRFPhaseAngle::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjRFPhaseAngle * pTarget = (CImpinjRFPhaseAngle *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_PhaseAngle = pDecoderStream->get_u16(&s_fdPhaseAngle);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdPhaseAngle);
    }
    
}


void
CImpinjRFPhaseAngle::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjRFPhaseAngle::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjRFPhaseAngle::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjRFPhaseAngle::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_PhaseAngle, &s_fdPhaseAngle);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjRFPhaseAngle::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CTagReportData::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjPeakRSSI
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjPeakRSSI::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjPeakRSSI",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    57,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjPeakRSSI::s_apFieldDescriptorTable[] =
{
  
    &s_fdRSSI,
    NULL
};



const CFieldDescriptor
CImpinjPeakRSSI::s_fdRSSI =
{
    CFieldDescriptor::FT_S16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RSSI",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjPeakRSSI::CImpinjPeakRSSI (void)
{
    m_pType = &s_typeDescriptor;
  
    m_RSSI = 0;
}

CImpinjPeakRSSI::~CImpinjPeakRSSI (void)
{
}


CElement *
CImpinjPeakRSSI::s_construct (void)
{
    return (CElement *) new CImpinjPeakRSSI();
}


void
CImpinjPeakRSSI::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjPeakRSSI * pTarget = (CImpinjPeakRSSI *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_RSSI = pDecoderStream->get_s16(&s_fdRSSI);
    }
    else
    {
        pDecoderStream->get_s16(&s_fdRSSI);
    }
    
}


void
CImpinjPeakRSSI::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjPeakRSSI::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjPeakRSSI::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjPeakRSSI::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_s16(m_RSSI, &s_fdRSSI);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjPeakRSSI::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CTagReportData::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGPSCoordinates
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGPSCoordinates::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGPSCoordinates",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    58,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGPSCoordinates::s_apFieldDescriptorTable[] =
{
  
    &s_fdLatitude,
    &s_fdLongitude,
    NULL
};



const CFieldDescriptor
CImpinjGPSCoordinates::s_fdLatitude =
{
    CFieldDescriptor::FT_S32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Latitude",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CImpinjGPSCoordinates::s_fdLongitude =
{
    CFieldDescriptor::FT_S32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Longitude",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjGPSCoordinates::CImpinjGPSCoordinates (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Latitude = 0;
    m_Longitude = 0;
}

CImpinjGPSCoordinates::~CImpinjGPSCoordinates (void)
{
}


CElement *
CImpinjGPSCoordinates::s_construct (void)
{
    return (CElement *) new CImpinjGPSCoordinates();
}


void
CImpinjGPSCoordinates::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGPSCoordinates * pTarget = (CImpinjGPSCoordinates *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Latitude = pDecoderStream->get_s32(&s_fdLatitude);
    }
    else
    {
        pDecoderStream->get_s32(&s_fdLatitude);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Longitude = pDecoderStream->get_s32(&s_fdLongitude);
    }
    else
    {
        pDecoderStream->get_s32(&s_fdLongitude);
    }
    
}


void
CImpinjGPSCoordinates::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGPSCoordinates::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGPSCoordinates::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGPSCoordinates::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_s32(m_Latitude, &s_fdLatitude);

    pEncoderStream->put_s32(m_Longitude, &s_fdLongitude);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGPSCoordinates::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CTagReportData::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjLoopSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjLoopSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjLoopSpec",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    59,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjLoopSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdLoopCount,
    NULL
};



const CFieldDescriptor
CImpinjLoopSpec::s_fdLoopCount =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "LoopCount",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjLoopSpec::CImpinjLoopSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_LoopCount = 0;
}

CImpinjLoopSpec::~CImpinjLoopSpec (void)
{
}


CElement *
CImpinjLoopSpec::s_construct (void)
{
    return (CElement *) new CImpinjLoopSpec();
}


void
CImpinjLoopSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjLoopSpec * pTarget = (CImpinjLoopSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_LoopCount = pDecoderStream->get_u32(&s_fdLoopCount);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdLoopCount);
    }
    
}


void
CImpinjLoopSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjLoopSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjLoopSpec::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjLoopSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_LoopCount, &s_fdLoopCount);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjLoopSpec::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CSpecParameter::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGPSNMEASentences
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGPSNMEASentences::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGPSNMEASentences",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    60,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGPSNMEASentences::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CImpinjGPSNMEASentences::CImpinjGPSNMEASentences (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pImpinjGGASentence = NULL;
    m_pImpinjRMCSentence = NULL;
}

CImpinjGPSNMEASentences::~CImpinjGPSNMEASentences (void)
{
}


CElement *
CImpinjGPSNMEASentences::s_construct (void)
{
    return (CElement *) new CImpinjGPSNMEASentences();
}


void
CImpinjGPSNMEASentences::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGPSNMEASentences * pTarget = (CImpinjGPSNMEASentences *) pTargetElement;

  
}


void
CImpinjGPSNMEASentences::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGPSNMEASentences::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ImpinjGGASentence
    pType = &CImpinjGGASentence::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjGGASentence = (CImpinjGGASentence *)*Cur++;
    }
    

    // 0-1 of ImpinjRMCSentence
    pType = &CImpinjRMCSentence::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pImpinjRMCSentence = (CImpinjRMCSentence *)*Cur++;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGPSNMEASentences::setImpinjGGASentence (
  CImpinjGGASentence *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjGGASentence);
    delete m_pImpinjGGASentence;
    m_pImpinjGGASentence = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjGPSNMEASentences::setImpinjRMCSentence (
  CImpinjRMCSentence *     pValue)
{
    removeSubParameterFromAllList(m_pImpinjRMCSentence);
    delete m_pImpinjRMCSentence;
    m_pImpinjRMCSentence = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CImpinjGPSNMEASentences::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGPSNMEASentences::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CImpinjGGASentence::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjGGASentence, pType);
      
    pType = &CImpinjRMCSentence::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pImpinjRMCSentence, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGPSNMEASentences::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    if(pEnclosingElementType == &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor)
    {
        return TRUE;
    }
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjGGASentence
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjGGASentence::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjGGASentence",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    61,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjGGASentence::s_apFieldDescriptorTable[] =
{
  
    &s_fdGGASentence,
    NULL
};



const CFieldDescriptor
CImpinjGGASentence::s_fdGGASentence =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GGASentence",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjGGASentence::CImpinjGGASentence (void)
{
    m_pType = &s_typeDescriptor;
  
}

CImpinjGGASentence::~CImpinjGGASentence (void)
{
}


CElement *
CImpinjGGASentence::s_construct (void)
{
    return (CElement *) new CImpinjGGASentence();
}


void
CImpinjGGASentence::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjGGASentence * pTarget = (CImpinjGGASentence *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_GGASentence = pDecoderStream->get_utf8v(&s_fdGGASentence);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdGGASentence);
    }
    
}


void
CImpinjGGASentence::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjGGASentence::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjGGASentence::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjGGASentence::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_utf8v(m_GGASentence, &s_fdGGASentence);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjGGASentence::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}




/*
*****************************************************************
**
** Custom parameter ImpinjRMCSentence
**
*****************************************************************
*/
  

const CTypeDescriptor
CImpinjRMCSentence::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ImpinjRMCSentence",	// m_pName
    &g_vdescImpinj,	// m_pVendorDescriptor
    &g_nsdescImpinj,	// m_pNamespaceDescriptor
    62,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CImpinjRMCSentence::s_apFieldDescriptorTable[] =
{
  
    &s_fdRMCSentence,
    NULL
};



const CFieldDescriptor
CImpinjRMCSentence::s_fdRMCSentence =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RMCSentence",	// m_pName
    NULL	// m_pEnumTable
};
CImpinjRMCSentence::CImpinjRMCSentence (void)
{
    m_pType = &s_typeDescriptor;
  
}

CImpinjRMCSentence::~CImpinjRMCSentence (void)
{
}


CElement *
CImpinjRMCSentence::s_construct (void)
{
    return (CElement *) new CImpinjRMCSentence();
}


void
CImpinjRMCSentence::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CImpinjRMCSentence * pTarget = (CImpinjRMCSentence *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_RMCSentence = pDecoderStream->get_utf8v(&s_fdRMCSentence);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdRMCSentence);
    }
    
}


void
CImpinjRMCSentence::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CImpinjRMCSentence::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(Cur != End && (*Cur)->isAllowedExtension(&s_typeDescriptor))
    {
        m_listCustom.push_back(*Cur);
        Cur++;
    }
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CImpinjRMCSentence::addCustom (
  CParameter *                  pValue)
{
    if(!pValue->isAllowedIn(&s_typeDescriptor))
    {
        return RC_NotAllowedAtExtensionPoint;
    }

    m_listCustom.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CImpinjRMCSentence::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_utf8v(m_RMCSentence, &s_fdRMCSentence);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}



llrp_bool_t
CImpinjRMCSentence::isAllowedIn (
  const CTypeDescriptor *       pEnclosingElementType) const
{
  
    return FALSE;
}


void
enrollImpinjTypesIntoRegistry (
  CTypeRegistry *               pTypeRegistry)
{
  
    pTypeRegistry->enroll(&CIMPINJ_ENABLE_EXTENSIONS::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CIMPINJ_ENABLE_EXTENSIONS_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CIMPINJ_SAVE_SETTINGS::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CIMPINJ_SAVE_SETTINGS_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjRequestedData::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjSubRegulatoryRegion::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjInventorySearchMode::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjTagDirectionReporting::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjTagDirection::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjFixedFrequencyList::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjReducedPowerFrequencyList::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjLowDutyCycle::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjDetailedVersion::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjFrequencyCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjTagInformation::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjForkliftConfiguration::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjForkliftHeightThreshold::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjForkliftZeroMotionTimeThreshold::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjForkliftCompanionBoardInfo::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGPIDebounceConfiguration::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjReaderTemperature::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjLinkMonitorConfiguration::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjReportBufferConfiguration::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjAccessSpecConfiguration::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjBlockWriteWordCount::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjBlockPermalock::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjBlockPermalockOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGetBlockPermalockStatus::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGetBlockPermalockStatusOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjSetQTConfig::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjSetQTConfigOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGetQTConfig::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGetQTConfigOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjTagReportContentSelector::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjEnableSerializedTID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjEnableRFPhaseAngle::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjEnablePeakRSSI::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjEnableGPSCoordinates::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjSerializedTID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjRFPhaseAngle::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjPeakRSSI::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGPSCoordinates::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjLoopSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGPSNMEASentences::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjGGASentence::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CImpinjRMCSentence::s_typeDescriptor);
  
}
