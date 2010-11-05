
/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C++ (aka cpp) implementation. It is generated into a .inc file
 * that is included by a platform specific .h header file.
 * That .h file takes care of prerequisites needed by this file.
 */


/*
 * Message classes - forward decls
 */

/* Custom messages */

class CIMPINJ_ENABLE_EXTENSIONS;
class CIMPINJ_ENABLE_EXTENSIONS_RESPONSE;
class CIMPINJ_SAVE_SETTINGS;
class CIMPINJ_SAVE_SETTINGS_RESPONSE;

/*
 * Parameter classes - forward decls
 */


/* Custom parameters */

class CImpinjRequestedData;
class CImpinjSubRegulatoryRegion;
class CImpinjInventorySearchMode;
class CImpinjTagDirectionReporting;
class CImpinjTagDirection;
class CImpinjFixedFrequencyList;
class CImpinjReducedPowerFrequencyList;
class CImpinjLowDutyCycle;
class CImpinjDetailedVersion;
class CImpinjFrequencyCapabilities;
class CImpinjTagInformation;
class CImpinjForkliftConfiguration;
class CImpinjForkliftHeightThreshold;
class CImpinjForkliftZeroMotionTimeThreshold;
class CImpinjForkliftCompanionBoardInfo;
class CImpinjGPIDebounceConfiguration;
class CImpinjReaderTemperature;
class CImpinjLinkMonitorConfiguration;
class CImpinjReportBufferConfiguration;
class CImpinjAccessSpecConfiguration;
class CImpinjBlockWriteWordCount;
class CImpinjBlockPermalock;
class CImpinjBlockPermalockOpSpecResult;
class CImpinjGetBlockPermalockStatus;
class CImpinjGetBlockPermalockStatusOpSpecResult;
class CImpinjSetQTConfig;
class CImpinjSetQTConfigOpSpecResult;
class CImpinjGetQTConfig;
class CImpinjGetQTConfigOpSpecResult;
class CImpinjTagReportContentSelector;
class CImpinjEnableSerializedTID;
class CImpinjEnableRFPhaseAngle;
class CImpinjEnablePeakRSSI;
class CImpinjEnableGPSCoordinates;
class CImpinjSerializedTID;
class CImpinjRFPhaseAngle;
class CImpinjPeakRSSI;
class CImpinjGPSCoordinates;
class CImpinjLoopSpec;
class CImpinjGPSNMEASentences;
class CImpinjGGASentence;
class CImpinjRMCSentence;

/*
 * Vendor descriptor declarations.
 */

extern const CVendorDescriptor
g_vdescImpinj;


/*
 * Namespace descriptor declarations.
 */

extern const CNamespaceDescriptor
g_nsdescImpinj;


/*
 * Enumeration definitions and declarations of
 * enumeration string tables.
 */


/**
 ** @brief  Global enumeration EImpinjRequestedDataType for LLRP enumerated field ImpinjRequestedDataType
 **
 
    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjRequestedDataType
{

    ImpinjRequestedDataType_All_Capabilities = 1000, /**< All_Capabilities */ 
    ImpinjRequestedDataType_Impinj_Detailed_Version = 1001, /**< Impinj_Detailed_Version */ 
    ImpinjRequestedDataType_Impinj_Frequency_Capabilities = 1002, /**< Impinj_Frequency_Capabilities */ 
    ImpinjRequestedDataType_All_Configuration = 2000, /**< All_Configuration */ 
    ImpinjRequestedDataType_Impinj_Sub_Regulatory_Region = 2001, /**< Impinj_Sub_Regulatory_Region */ 
    ImpinjRequestedDataType_Impinj_Forklift_Configuration = 2002, /**< Impinj_Forklift_Configuration */ 
    ImpinjRequestedDataType_Impinj_GPI_Debounce_Configuration = 2003, /**< Impinj_GPI_Debounce_Configuration */ 
    ImpinjRequestedDataType_Impinj_Reader_Temperature = 2004, /**< Impinj_Reader_Temperature */ 
    ImpinjRequestedDataType_Impinj_Link_Monitor_Configuration = 2005, /**< Impinj_Link_Monitor_Configuration */ 
    ImpinjRequestedDataType_Impinj_Report_Buffer_Configuration = 2006, /**< Impinj_Report_Buffer_Configuration */ 
    ImpinjRequestedDataType_Impinj_Access_Spec_Configuration = 2007, /**< Impinj_Access_Spec_Configuration */ 
    ImpinjRequestedDataType_Impinj_GPS_NMEA_Sentences = 2008, /**< Impinj_GPS_NMEA_Sentences */  
};

extern const SEnumTableEntry
g_estImpinjRequestedDataType[];


/**
 ** @brief  Global enumeration EImpinjRegulatoryRegion for LLRP enumerated field ImpinjRegulatoryRegion
 **
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjRegulatoryRegion
{

    ImpinjRegulatoryRegion_FCC_Part_15_247 = 0, /**< FCC_Part_15_247 */ 
    ImpinjRegulatoryRegion_ETSI_EN_300_220 = 1, /**< ETSI_EN_300_220 */ 
    ImpinjRegulatoryRegion_ETSI_EN_302_208_With_LBT = 2, /**< ETSI_EN_302_208_With_LBT */ 
    ImpinjRegulatoryRegion_Hong_Kong_920_925_MHz = 3, /**< Hong_Kong_920_925_MHz */ 
    ImpinjRegulatoryRegion_Taiwan_922_928_MHz = 4, /**< Taiwan_922_928_MHz */ 
    ImpinjRegulatoryRegion_Japan_952_954_MHz = 5, /**< Japan_952_954_MHz */ 
    ImpinjRegulatoryRegion_Japan_952_954_MHz_Low_Power = 6, /**< Japan_952_954_MHz_Low_Power */ 
    ImpinjRegulatoryRegion_ETSI_EN_302_208_v1_2_1 = 7, /**< ETSI_EN_302_208_v1_2_1 */ 
    ImpinjRegulatoryRegion_Korea_910_914_MHz = 8, /**< Korea_910_914_MHz */ 
    ImpinjRegulatoryRegion_Malaysia_919_923_MHz = 9, /**< Malaysia_919_923_MHz */ 
    ImpinjRegulatoryRegion_China_920_925_MHz = 10, /**< China_920_925_MHz */ 
    ImpinjRegulatoryRegion_Japan_952_954_MHz_Without_LBT = 11, /**< Japan_952_954_MHz_Without_LBT */ 
    ImpinjRegulatoryRegion_South_Africa_915_919_MHz = 12, /**< South_Africa_915_919_MHz */ 
    ImpinjRegulatoryRegion_Brazil_902_907_and_915_928_MHz = 13, /**< Brazil_902_907_and_915_928_MHz */ 
    ImpinjRegulatoryRegion_Thailand_920_925_MHz = 14, /**< Thailand_920_925_MHz */ 
    ImpinjRegulatoryRegion_Singapore_920_925_MHz = 15, /**< Singapore_920_925_MHz */ 
    ImpinjRegulatoryRegion_Australia_920_926_MHz = 16, /**< Australia_920_926_MHz */ 
    ImpinjRegulatoryRegion_India_865_867_MHz = 17, /**< India_865_867_MHz */ 
    ImpinjRegulatoryRegion_Uruguay_916_928_MHz = 18, /**< Uruguay_916_928_MHz */ 
    ImpinjRegulatoryRegion_Vietnam_920_925_MHz = 19, /**< Vietnam_920_925_MHz */ 
    ImpinjRegulatoryRegion_Israel_915_917_MHz = 20, /**< Israel_915_917_MHz */  
};

extern const SEnumTableEntry
g_estImpinjRegulatoryRegion[];


/**
 ** @brief  Global enumeration EImpinjInventorySearchType for LLRP enumerated field ImpinjInventorySearchType
 **
 
    
    
    
    
  
 **/

enum EImpinjInventorySearchType
{

    ImpinjInventorySearchType_Reader_Selected = 0, /**< Reader_Selected */ 
    ImpinjInventorySearchType_Single_Target = 1, /**< Single_Target */ 
    ImpinjInventorySearchType_Dual_Target = 2, /**< Dual_Target */ 
    ImpinjInventorySearchType_Single_Target_With_Suppression = 3, /**< Single_Target_With_Suppression */  
};

extern const SEnumTableEntry
g_estImpinjInventorySearchType[];


/**
 ** @brief  Global enumeration EImpinjTagDirectionAntennaConfiguration for LLRP enumerated field ImpinjTagDirectionAntennaConfiguration
 **
 
    
    
  
 **/

enum EImpinjTagDirectionAntennaConfiguration
{

    ImpinjTagDirectionAntennaConfiguration_Dual_Antenna = 1, /**< Dual_Antenna */ 
    ImpinjTagDirectionAntennaConfiguration_Quad_Antenna = 2, /**< Quad_Antenna */  
};

extern const SEnumTableEntry
g_estImpinjTagDirectionAntennaConfiguration[];


/**
 ** @brief  Global enumeration EImpinjDirection for LLRP enumerated field ImpinjDirection
 **
 
    
    
    
  
 **/

enum EImpinjDirection
{

    ImpinjDirection_Indeterminate = 0, /**< Indeterminate */ 
    ImpinjDirection_From_Side2_To_Side1 = 1, /**< From_Side2_To_Side1 */ 
    ImpinjDirection_From_Side1_To_Side2 = 2, /**< From_Side1_To_Side2 */  
};

extern const SEnumTableEntry
g_estImpinjDirection[];


/**
 ** @brief  Global enumeration EImpinjFixedFrequencyMode for LLRP enumerated field ImpinjFixedFrequencyMode
 **
 
    
    
    
  
 **/

enum EImpinjFixedFrequencyMode
{

    ImpinjFixedFrequencyMode_Disabled = 0, /**< Disabled */ 
    ImpinjFixedFrequencyMode_Auto_Select = 1, /**< Auto_Select */ 
    ImpinjFixedFrequencyMode_Channel_List = 2, /**< Channel_List */  
};

extern const SEnumTableEntry
g_estImpinjFixedFrequencyMode[];


/**
 ** @brief  Global enumeration EImpinjReducedPowerMode for LLRP enumerated field ImpinjReducedPowerMode
 **
 
    
    
  
 **/

enum EImpinjReducedPowerMode
{

    ImpinjReducedPowerMode_Disabled = 0, /**< Disabled */ 
    ImpinjReducedPowerMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjReducedPowerMode[];


/**
 ** @brief  Global enumeration EImpinjLowDutyCycleMode for LLRP enumerated field ImpinjLowDutyCycleMode
 **
 
    
    
  
 **/

enum EImpinjLowDutyCycleMode
{

    ImpinjLowDutyCycleMode_Disabled = 0, /**< Disabled */ 
    ImpinjLowDutyCycleMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjLowDutyCycleMode[];


/**
 ** @brief  Global enumeration EImpinjLinkMonitorMode for LLRP enumerated field ImpinjLinkMonitorMode
 **
 
    
    
  
 **/

enum EImpinjLinkMonitorMode
{

    ImpinjLinkMonitorMode_Disabled = 0, /**< Disabled */ 
    ImpinjLinkMonitorMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjLinkMonitorMode[];


/**
 ** @brief  Global enumeration EImpinjReportBufferMode for LLRP enumerated field ImpinjReportBufferMode
 **
 
    
    
  
 **/

enum EImpinjReportBufferMode
{

    ImpinjReportBufferMode_Normal = 0, /**< Normal */ 
    ImpinjReportBufferMode_Low_Latency = 1, /**< Low_Latency */  
};

extern const SEnumTableEntry
g_estImpinjReportBufferMode[];


/**
 ** @brief  Global enumeration EImpinjBlockPermalockResultType for LLRP enumerated field ImpinjBlockPermalockResultType
 **
 
    
    
    
    
    
    
    
  
 **/

enum EImpinjBlockPermalockResultType
{

    ImpinjBlockPermalockResultType_Success = 0, /**< Success */ 
    ImpinjBlockPermalockResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjBlockPermalockResultType_Nonspecific_Tag_Error = 2, /**< Nonspecific_Tag_Error */ 
    ImpinjBlockPermalockResultType_No_Response_From_Tag = 3, /**< No_Response_From_Tag */ 
    ImpinjBlockPermalockResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjBlockPermalockResultType_Incorrect_Password_Error = 5, /**< Incorrect_Password_Error */ 
    ImpinjBlockPermalockResultType_Tag_Memory_Overrun_Error = 6, /**< Tag_Memory_Overrun_Error */  
};

extern const SEnumTableEntry
g_estImpinjBlockPermalockResultType[];


/**
 ** @brief  Global enumeration EImpinjGetBlockPermalockStatusResultType for LLRP enumerated field ImpinjGetBlockPermalockStatusResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjGetBlockPermalockStatusResultType
{

    ImpinjGetBlockPermalockStatusResultType_Success = 0, /**< Success */ 
    ImpinjGetBlockPermalockStatusResultType_Nonspecific_Tag_Error = 1, /**< Nonspecific_Tag_Error */ 
    ImpinjGetBlockPermalockStatusResultType_No_Response_From_Tag = 2, /**< No_Response_From_Tag */ 
    ImpinjGetBlockPermalockStatusResultType_Nonspecific_Reader_Error = 3, /**< Nonspecific_Reader_Error */ 
    ImpinjGetBlockPermalockStatusResultType_Incorrect_Password_Error = 4, /**< Incorrect_Password_Error */ 
    ImpinjGetBlockPermalockStatusResultType_Tag_Memory_Overrun_Error = 5, /**< Tag_Memory_Overrun_Error */  
};

extern const SEnumTableEntry
g_estImpinjGetBlockPermalockStatusResultType[];


/**
 ** @brief  Global enumeration EImpinjQTDataProfile for LLRP enumerated field ImpinjQTDataProfile
 **
 
    
    
    
  
 **/

enum EImpinjQTDataProfile
{

    ImpinjQTDataProfile_Unknown = 0, /**< Unknown */ 
    ImpinjQTDataProfile_Private = 1, /**< Private */ 
    ImpinjQTDataProfile_Public = 2, /**< Public */  
};

extern const SEnumTableEntry
g_estImpinjQTDataProfile[];


/**
 ** @brief  Global enumeration EImpinjQTAccessRange for LLRP enumerated field ImpinjQTAccessRange
 **
 
    
    
    
  
 **/

enum EImpinjQTAccessRange
{

    ImpinjQTAccessRange_Unknown = 0, /**< Unknown */ 
    ImpinjQTAccessRange_Normal_Range = 1, /**< Normal_Range */ 
    ImpinjQTAccessRange_Short_Range = 2, /**< Short_Range */  
};

extern const SEnumTableEntry
g_estImpinjQTAccessRange[];


/**
 ** @brief  Global enumeration EImpinjQTPersistence for LLRP enumerated field ImpinjQTPersistence
 **
 
    
    
    
  
 **/

enum EImpinjQTPersistence
{

    ImpinjQTPersistence_Unknown = 0, /**< Unknown */ 
    ImpinjQTPersistence_Temporary = 1, /**< Temporary */ 
    ImpinjQTPersistence_Permanent = 2, /**< Permanent */  
};

extern const SEnumTableEntry
g_estImpinjQTPersistence[];


/**
 ** @brief  Global enumeration EImpinjSetQTConfigResultType for LLRP enumerated field ImpinjSetQTConfigResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjSetQTConfigResultType
{

    ImpinjSetQTConfigResultType_Success = 0, /**< Success */ 
    ImpinjSetQTConfigResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjSetQTConfigResultType_Nonspecific_Tag_Error = 2, /**< Nonspecific_Tag_Error */ 
    ImpinjSetQTConfigResultType_No_Response_From_Tag = 3, /**< No_Response_From_Tag */ 
    ImpinjSetQTConfigResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjSetQTConfigResultType_Incorrect_Password_Error = 5, /**< Incorrect_Password_Error */  
};

extern const SEnumTableEntry
g_estImpinjSetQTConfigResultType[];


/**
 ** @brief  Global enumeration EImpinjGetQTConfigResultType for LLRP enumerated field ImpinjGetQTConfigResultType
 **
 
    
    
    
    
    
  
 **/

enum EImpinjGetQTConfigResultType
{

    ImpinjGetQTConfigResultType_Success = 0, /**< Success */ 
    ImpinjGetQTConfigResultType_Nonspecific_Tag_Error = 1, /**< Nonspecific_Tag_Error */ 
    ImpinjGetQTConfigResultType_No_Response_From_Tag = 2, /**< No_Response_From_Tag */ 
    ImpinjGetQTConfigResultType_Nonspecific_Reader_Error = 3, /**< Nonspecific_Reader_Error */ 
    ImpinjGetQTConfigResultType_Incorrect_Password_Error = 4, /**< Incorrect_Password_Error */  
};

extern const SEnumTableEntry
g_estImpinjGetQTConfigResultType[];


/**
 ** @brief  Global enumeration EImpinjSerializedTIDMode for LLRP enumerated field ImpinjSerializedTIDMode
 **
 
    
    
  
 **/

enum EImpinjSerializedTIDMode
{

    ImpinjSerializedTIDMode_Disabled = 0, /**< Disabled */ 
    ImpinjSerializedTIDMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjSerializedTIDMode[];


/**
 ** @brief  Global enumeration EImpinjRFPhaseAngleMode for LLRP enumerated field ImpinjRFPhaseAngleMode
 **
 
    
    
  
 **/

enum EImpinjRFPhaseAngleMode
{

    ImpinjRFPhaseAngleMode_Disabled = 0, /**< Disabled */ 
    ImpinjRFPhaseAngleMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjRFPhaseAngleMode[];


/**
 ** @brief  Global enumeration EImpinjPeakRSSIMode for LLRP enumerated field ImpinjPeakRSSIMode
 **
 
    
    
  
 **/

enum EImpinjPeakRSSIMode
{

    ImpinjPeakRSSIMode_Disabled = 0, /**< Disabled */ 
    ImpinjPeakRSSIMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjPeakRSSIMode[];


/**
 ** @brief  Global enumeration EImpinjGPSCoordinatesMode for LLRP enumerated field ImpinjGPSCoordinatesMode
 **
 
    
    
  
 **/

enum EImpinjGPSCoordinatesMode
{

    ImpinjGPSCoordinatesMode_Disabled = 0, /**< Disabled */ 
    ImpinjGPSCoordinatesMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjGPSCoordinatesMode[];


/** 
 * \defgroup ImpinjMessage  Impinj Message Classes
 * Classes to manipulate the messages defined by the Impinj LLRP protocol
 */
/*@{*/ 

/**
 ** @brief  Class Definition CIMPINJ_ENABLE_EXTENSIONS for LLRP message IMPINJ_ENABLE_EXTENSIONS
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>The IMPINJ_ENABLE_EXTENSIONS message only applies for the duration of the current LLRP connection. If the LLRP connection is broken and re-established, the application must re-issue this command.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_ENABLE_EXTENSIONS : public CMessage
{
  public:
    CIMPINJ_ENABLE_EXTENSIONS (void);
    ~CIMPINJ_ENABLE_EXTENSIONS (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ENABLE_EXTENSIONS_RESPONSE for LLRP message IMPINJ_ENABLE_EXTENSIONS_RESPONSE
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message is the response by the Reader to an IMPINJ_ENABLE_EXTENSIONS message. If the Reader was capable of enabling the Impinj extensions the reader returns the success code in the LLRPStatus parameter. If there is an error, the reader returns an appropriate error code.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_ENABLE_EXTENSIONS_RESPONSE : public CMessage
{
  public:
    CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void);
    ~CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_SAVE_SETTINGS for LLRP message IMPINJ_SAVE_SETTINGS
 **
 
    
      
<ul>
  
</ul>  

      
	     
    <p>This custom message instructs the Reader to save its current settings to persistent storage. The saved parameters will then become the Reader's power-on and reset settings.</p> 
 
	     
    <p>On Speedway the settings include only the current configuration set through SET_READER_CONFIG.</p> 
 
	     
    <p>On Speedway Revolution the settings include the current configuration, ROSpecs, and AccessSpecs. The enabled or disabled state of ROSpecs and AccessSpecs are saved. An active ROSpec is saved as enabled. The current countdown of AccessSpecs, if any, are saved. The enable/disable state and countdown are not automatically updated in persistent storage during reader operation.</p> 
 
	     
    <p>Note that there is no way to recall the persistent settings during runtime. Only after a Reader power-on or reset are the persistent settings applied. When ResetToFactoryDefault in SET_READER_CONFIG is true the persistent settings are deleted. The SaveConfiguration Boolean must be set TRUE. When FALSE this message does nothing.</p> 
 
      <SMALL><i>Copyright 2007, 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CIMPINJ_SAVE_SETTINGS : public CMessage
{
  public:
    CIMPINJ_SAVE_SETTINGS (void);
    ~CIMPINJ_SAVE_SETTINGS (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_SaveConfiguration;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSaveConfiguration;
//@}

    /** @brief Get accessor functions for the LLRP SaveConfiguration field */
    inline llrp_u1_t
    getSaveConfiguration (void)
    {
        return m_SaveConfiguration;
    }

    /** @brief Set accessor functions for the LLRP SaveConfiguration field */
    inline void
    setSaveConfiguration (
      llrp_u1_t value)
    {
        m_SaveConfiguration = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_SAVE_SETTINGS_RESPONSE for LLRP message IMPINJ_SAVE_SETTINGS_RESPONSE
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message is the response by the Reader to an IMPINJ_SAVE_SETTINGS message. If the Reader was capable of saving the current configuration to persistent storage, the Reader returns the success code in the LLRPStatus parameter. If there is an error, the Reader returns an appropriate error code.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_SAVE_SETTINGS_RESPONSE : public CMessage
{
  public:
    CIMPINJ_SAVE_SETTINGS_RESPONSE (void);
    ~CIMPINJ_SAVE_SETTINGS_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/*@}*/

/** 
 * \defgroup ImpinjParameter Impinj Parameter Classes
 * Classes to manipulate the parameters defined by the Impinj LLRP protocol
 */
/*@{*/ 

/**
 ** @brief  Class Definition CImpinjRequestedData for LLRP parameter ImpinjRequestedData
 **
 
    
      
<ul>
  
</ul>  

      
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjRequestedData : public CParameter
{
  public:
    CImpinjRequestedData (void);
    ~CImpinjRequestedData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRequestedDataType m_eRequestedData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRequestedData;
//@}

    /** @brief Get accessor functions for the LLRP RequestedData field */
    inline EImpinjRequestedDataType
    getRequestedData (void)
    {
        return m_eRequestedData;
    }

    /** @brief Set accessor functions for the LLRP RequestedData field */
    inline void
    setRequestedData (
      EImpinjRequestedDataType value)
    {
        m_eRequestedData = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSubRegulatoryRegion for LLRP parameter ImpinjSubRegulatoryRegion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is used when a particular regulatory region supports multiple operational modes. The Reader validates the RegulatoryRegion field against the regulatory region advertised in the reader's capabilities and only allows compatible regions to be set. Note that when setting the sub-regulatory region using the SET_READER_CONFIG message, the ResetToFactoryDefault field must be set to true.  This will delete any configured ROSpecs and AccessSpecs. Failure to set the ResetToFactoryDefault field will result in an error. The Client should subsequently issue a GET_READER_CAPABILITIES command after updating the regulatory region as the change may have affected the advertised tables.</p> 
 
        
    <p>After the reader accepts this parameter, it will begin to reload its regulatory settings; this can take several seconds. Applications should plan for an additional delay of several seconds for the SET_READER_CONFIG_RESPONSE. Note: An LLRP ResetToFactoryDefault that changes the RegulatoryRegion will have the same behavior.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSubRegulatoryRegion : public CParameter
{
  public:
    CImpinjSubRegulatoryRegion (void);
    ~CImpinjSubRegulatoryRegion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRegulatoryRegion m_eRegulatoryRegion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRegulatoryRegion;
//@}

    /** @brief Get accessor functions for the LLRP RegulatoryRegion field */
    inline EImpinjRegulatoryRegion
    getRegulatoryRegion (void)
    {
        return m_eRegulatoryRegion;
    }

    /** @brief Set accessor functions for the LLRP RegulatoryRegion field */
    inline void
    setRegulatoryRegion (
      EImpinjRegulatoryRegion value)
    {
        m_eRegulatoryRegion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjInventorySearchMode for LLRP parameter ImpinjInventorySearchMode
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter specifies the Impinj-specific inventory search mode used by a particular antenna. The inventory search mode may be configured as either part of the default reader configuration (via a SET_READER_CONFIG message), or as part of individual AISpecs within a ROSpec (via an ADD_ROSPEC message). For any AISpec, each enabled antenna must be configured to use the same search algorithm. Mismatched antennas will result in an error reported by the Reader.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjInventorySearchMode : public CParameter
{
  public:
    CImpinjInventorySearchMode (void);
    ~CImpinjInventorySearchMode (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjInventorySearchType m_eInventorySearchMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdInventorySearchMode;
//@}

    /** @brief Get accessor functions for the LLRP InventorySearchMode field */
    inline EImpinjInventorySearchType
    getInventorySearchMode (void)
    {
        return m_eInventorySearchMode;
    }

    /** @brief Set accessor functions for the LLRP InventorySearchMode field */
    inline void
    setInventorySearchMode (
      EImpinjInventorySearchType value)
    {
        m_eInventorySearchMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagDirectionReporting for LLRP parameter ImpinjTagDirectionReporting
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter enables the Reader to report direction information for each tag that moves through a portal. If tag direction is enabled, the Reader will provide an ImpinjTagInformation parameter containing an ImpinjTagDirection parameter in an RO_ACCESS_REPORT for each tag in which a direction determination has been made. The configuration determines the number of antennas used to calculate the direction, while the physical cabling of the antennas to the Reader determines the frame of reference.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjTagDirectionReporting : public CParameter
{
  public:
    CImpinjTagDirectionReporting (void);
    ~CImpinjTagDirectionReporting (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableTagDirection;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableTagDirection;
//@}

    /** @brief Get accessor functions for the LLRP EnableTagDirection field */
    inline llrp_u1_t
    getEnableTagDirection (void)
    {
        return m_EnableTagDirection;
    }

    /** @brief Set accessor functions for the LLRP EnableTagDirection field */
    inline void
    setEnableTagDirection (
      llrp_u1_t value)
    {
        m_EnableTagDirection = value;
    }


  protected:
    EImpinjTagDirectionAntennaConfiguration m_eAntennaConfiguration;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaConfiguration;
//@}

    /** @brief Get accessor functions for the LLRP AntennaConfiguration field */
    inline EImpinjTagDirectionAntennaConfiguration
    getAntennaConfiguration (void)
    {
        return m_eAntennaConfiguration;
    }

    /** @brief Set accessor functions for the LLRP AntennaConfiguration field */
    inline void
    setAntennaConfiguration (
      EImpinjTagDirectionAntennaConfiguration value)
    {
        m_eAntennaConfiguration = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagDirection for LLRP parameter ImpinjTagDirection
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter conveys the direction of a tag through a portal with an associated confidence factor. If tag direction is enabled using the ImpinjTagDirectionReporting parameter, the Reader will send RO_ACCESS_REPORT messages containing direction information whenever a direction decision has been made or the confidence factor changes.</p> 
 
         
    <p>As it is impossible to define direction without a frame of reference, tag direction is reported by using abstract sides 
   <b>1</b>
  and 
   <b>2</b>
  as reference points. The actual definition corresponding to the values reported by the Reader are determined by the physical cabling of the antennas to the Reader. Specifically, for a dual antenna configuration, side 1 is defined as the direction of the antenna connected to the Antenna 1 BNC and side 2 is defined as the direction of the antenna connected to the Antenna 2 BNC. For the quad antenna configuration, side 1 is antennas 1 and 3, and side 2 is antennas 2 and 4.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjTagDirection : public CParameter
{
  public:
    CImpinjTagDirection (void);
    ~CImpinjTagDirection (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_DecisionTimestamp;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDecisionTimestamp;
//@}

    /** @brief Get accessor functions for the LLRP DecisionTimestamp field */
    inline llrp_u64_t
    getDecisionTimestamp (void)
    {
        return m_DecisionTimestamp;
    }

    /** @brief Set accessor functions for the LLRP DecisionTimestamp field */
    inline void
    setDecisionTimestamp (
      llrp_u64_t value)
    {
        m_DecisionTimestamp = value;
    }


  protected:
    EImpinjDirection m_eTagDirection;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagDirection;
//@}

    /** @brief Get accessor functions for the LLRP TagDirection field */
    inline EImpinjDirection
    getTagDirection (void)
    {
        return m_eTagDirection;
    }

    /** @brief Set accessor functions for the LLRP TagDirection field */
    inline void
    setTagDirection (
      EImpinjDirection value)
    {
        m_eTagDirection = value;
    }


  protected:
    llrp_u16_t m_Confidence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidence;
//@}

    /** @brief Get accessor functions for the LLRP Confidence field */
    inline llrp_u16_t
    getConfidence (void)
    {
        return m_Confidence;
    }

    /** @brief Set accessor functions for the LLRP Confidence field */
    inline void
    setConfidence (
      llrp_u16_t value)
    {
        m_Confidence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjFixedFrequencyList for LLRP parameter ImpinjFixedFrequencyList
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter allows the Reader to make intelligent decisions about which channel to use in fixed frequency or intelligent hopping regulatory regions. The Mode field determines how the Reader will select the active channel. When set to zero (disabled), the Reader ignores this parameter and instead uses the frequency information in the LLRP RFTransmitter parameter. When set to one, the Reader chooses the active channel automatically based on the rules of the regulatory region. When set to two, the Reader chooses the active channel from a configurable list of channel indices based on the FixedFrequencyTable parameter advertised in the Reader's capabilities. The maximum number of channels allowed in the configurable list varies by regulatory region. A repeated channel index means the Reader will use the channel multiple times. When Mode is set to zero or one, the ChannelList array is ignored.</p> 
 
         
    <p>This parameter may only be added in an operational mode (i.e. not disabled) when the Reader is operating in a fixed frequency or intelligent hopping regulatory region. The parameter contents must be consistent across all enabled antennas in an AISpec.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjFixedFrequencyList : public CParameter
{
  public:
    CImpinjFixedFrequencyList (void);
    ~CImpinjFixedFrequencyList (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjFixedFrequencyMode m_eFixedFrequencyMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFixedFrequencyMode;
//@}

    /** @brief Get accessor functions for the LLRP FixedFrequencyMode field */
    inline EImpinjFixedFrequencyMode
    getFixedFrequencyMode (void)
    {
        return m_eFixedFrequencyMode;
    }

    /** @brief Set accessor functions for the LLRP FixedFrequencyMode field */
    inline void
    setFixedFrequencyMode (
      EImpinjFixedFrequencyMode value)
    {
        m_eFixedFrequencyMode = value;
    }


  protected:
    llrp_u16v_t m_ChannelList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdChannelList;
//@}

    /** @brief Get accessor functions for the LLRP ChannelList field */
    inline llrp_u16v_t
    getChannelList (void)
    {
        return m_ChannelList;
    }

    /** @brief Set accessor functions for the LLRP ChannelList field */
    inline void
    setChannelList (
      llrp_u16v_t value)
    {
        m_ChannelList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReducedPowerFrequencyList for LLRP parameter ImpinjReducedPowerFrequencyList
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the Reader to apply a reduced power to specific channels listed in the ChannelList when operating in the FCC regulatory region. The ReducedPowerMode field determines how the Reader will interpret the channels listed. When set to zero (disabled), the Reader ignores this parameter. When set to one, during inventory and access the Reader will apply a reduced power level to the list of channel indices derived from the FrequencyList supplied by the ImpinjFrequenciesCapabilities parameter advertised in the Reader's capabilities. The reduced power level is not configurable, and defaults to the lowest power possible by the device. The minimum number of channels allowed in the configurable list is two, and the maximum is sixteen.</p> 
 
        
    <p>This parameter is valid only when the Reader is operating in the FCC regulatory region. The parameter contents must be consistent across all enabled antennas in an AISpec.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjReducedPowerFrequencyList : public CParameter
{
  public:
    CImpinjReducedPowerFrequencyList (void);
    ~CImpinjReducedPowerFrequencyList (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjReducedPowerMode m_eReducedPowerMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReducedPowerMode;
//@}

    /** @brief Get accessor functions for the LLRP ReducedPowerMode field */
    inline EImpinjReducedPowerMode
    getReducedPowerMode (void)
    {
        return m_eReducedPowerMode;
    }

    /** @brief Set accessor functions for the LLRP ReducedPowerMode field */
    inline void
    setReducedPowerMode (
      EImpinjReducedPowerMode value)
    {
        m_eReducedPowerMode = value;
    }


  protected:
    llrp_u16v_t m_ChannelList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdChannelList;
//@}

    /** @brief Get accessor functions for the LLRP ChannelList field */
    inline llrp_u16v_t
    getChannelList (void)
    {
        return m_ChannelList;
    }

    /** @brief Set accessor functions for the LLRP ChannelList field */
    inline void
    setChannelList (
      llrp_u16v_t value)
    {
        m_ChannelList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLowDutyCycle for LLRP parameter ImpinjLowDutyCycle
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter provides additional control of the RF duty cycle of the Reader beyond that provided by the TagTransitTime field in the LLRP C1G2SingulationControl parameter.  During inventory, if the Reader detects zero tags on all enabled antennas in the AISpec, EmptyFieldTimeout specifies in milliseconds the time the Reader will wait before entering low duty cycle mode.  In this low duty cycle mode, the Reader will revisit each enabled antenna in the AISpec every FieldPingInterval milliseconds, checking for tags.  When a tag is detected, full duty cycle will resume.  The Reader will exit low duty cycle mode at the start of each AISpec and restart its EmptyFieldTimeout timer.</p> 
 
         
    <p>As an example, assume EmptyFieldTimeout is set to 500 ms and FieldPingInterval is set to 200 ms for each of the enabled antennas in an AISpec, and four antennas are enabled.  Once the Reader detects zero tags on each of the four antennas, the EmptyFieldTimeout timer starts while the Reader continues to search the FOV for tags.  If the Reader detects tags, the timer stops.  If the Reader detects zero tags for 500 ms, a timeout occurs and the Reader enters low duty cycle mode.  During this mode, the Reader will visit each of the four enabled antennas once in the FieldPingInterval of 200 ms.  Therefore, the Reader will switch on the transmitter briefly every 50 ms to check for tags in the FOV of one of the enabled antennas.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjLowDutyCycle : public CParameter
{
  public:
    CImpinjLowDutyCycle (void);
    ~CImpinjLowDutyCycle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLowDutyCycleMode m_eLowDutyCycleMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLowDutyCycleMode;
//@}

    /** @brief Get accessor functions for the LLRP LowDutyCycleMode field */
    inline EImpinjLowDutyCycleMode
    getLowDutyCycleMode (void)
    {
        return m_eLowDutyCycleMode;
    }

    /** @brief Set accessor functions for the LLRP LowDutyCycleMode field */
    inline void
    setLowDutyCycleMode (
      EImpinjLowDutyCycleMode value)
    {
        m_eLowDutyCycleMode = value;
    }


  protected:
    llrp_u16_t m_EmptyFieldTimeout;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEmptyFieldTimeout;
//@}

    /** @brief Get accessor functions for the LLRP EmptyFieldTimeout field */
    inline llrp_u16_t
    getEmptyFieldTimeout (void)
    {
        return m_EmptyFieldTimeout;
    }

    /** @brief Set accessor functions for the LLRP EmptyFieldTimeout field */
    inline void
    setEmptyFieldTimeout (
      llrp_u16_t value)
    {
        m_EmptyFieldTimeout = value;
    }


  protected:
    llrp_u16_t m_FieldPingInterval;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFieldPingInterval;
//@}

    /** @brief Get accessor functions for the LLRP FieldPingInterval field */
    inline llrp_u16_t
    getFieldPingInterval (void)
    {
        return m_FieldPingInterval;
    }

    /** @brief Set accessor functions for the LLRP FieldPingInterval field */
    inline void
    setFieldPingInterval (
      llrp_u16_t value)
    {
        m_FieldPingInterval = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDetailedVersion for LLRP parameter ImpinjDetailedVersion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides detailed information about the individual components running on the Reader.  The primary platform version is available in the FirmwareVersion field in the GeneralDeviceCapabilities parameter of the Reader's capabilities.  However, there are sub-components of the Reader that contain independent version information that is unavailable in this manner.  This parameter provides this detailed information.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjDetailedVersion : public CParameter
{
  public:
    CImpinjDetailedVersion (void);
    ~CImpinjDetailedVersion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_ModelName;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdModelName;
//@}

    /** @brief Get accessor functions for the LLRP ModelName field */
    inline llrp_utf8v_t
    getModelName (void)
    {
        return m_ModelName;
    }

    /** @brief Set accessor functions for the LLRP ModelName field */
    inline void
    setModelName (
      llrp_utf8v_t value)
    {
        m_ModelName = value;
    }


  protected:
    llrp_utf8v_t m_SerialNumber;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerialNumber;
//@}

    /** @brief Get accessor functions for the LLRP SerialNumber field */
    inline llrp_utf8v_t
    getSerialNumber (void)
    {
        return m_SerialNumber;
    }

    /** @brief Set accessor functions for the LLRP SerialNumber field */
    inline void
    setSerialNumber (
      llrp_utf8v_t value)
    {
        m_SerialNumber = value;
    }


  protected:
    llrp_utf8v_t m_SoftwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSoftwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP SoftwareVersion field */
    inline llrp_utf8v_t
    getSoftwareVersion (void)
    {
        return m_SoftwareVersion;
    }

    /** @brief Set accessor functions for the LLRP SoftwareVersion field */
    inline void
    setSoftwareVersion (
      llrp_utf8v_t value)
    {
        m_SoftwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_utf8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_utf8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_FPGAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFPGAVersion;
//@}

    /** @brief Get accessor functions for the LLRP FPGAVersion field */
    inline llrp_utf8v_t
    getFPGAVersion (void)
    {
        return m_FPGAVersion;
    }

    /** @brief Set accessor functions for the LLRP FPGAVersion field */
    inline void
    setFPGAVersion (
      llrp_utf8v_t value)
    {
        m_FPGAVersion = value;
    }


  protected:
    llrp_utf8v_t m_PCBAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPCBAVersion;
//@}

    /** @brief Get accessor functions for the LLRP PCBAVersion field */
    inline llrp_utf8v_t
    getPCBAVersion (void)
    {
        return m_PCBAVersion;
    }

    /** @brief Set accessor functions for the LLRP PCBAVersion field */
    inline void
    setPCBAVersion (
      llrp_utf8v_t value)
    {
        m_PCBAVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjFrequencyCapabilities for LLRP parameter ImpinjFrequencyCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is included in the Reader's capabilities and carries each frequency supported by the reader (see section 4.2.9 for more information).  The FrequencyList field is a one-based array of frequencies in kHz.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjFrequencyCapabilities : public CParameter
{
  public:
    CImpinjFrequencyCapabilities (void);
    ~CImpinjFrequencyCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32v_t m_FrequencyList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFrequencyList;
//@}

    /** @brief Get accessor functions for the LLRP FrequencyList field */
    inline llrp_u32v_t
    getFrequencyList (void)
    {
        return m_FrequencyList;
    }

    /** @brief Set accessor functions for the LLRP FrequencyList field */
    inline void
    setFrequencyList (
      llrp_u32v_t value)
    {
        m_FrequencyList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagInformation for LLRP parameter ImpinjTagInformation
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides additional information about a tag that cannot be conveyed using the standard LLRP TagReportData parameter.  The EPC is provided so an application may correlate this information with the associated TagReportData information as these parameters may arrive asynchronously with respect to the standard immediate reporting mechanism.  Following the EPC is a set of parameters providing additional information about the tag, such as the direction in which it traveled through a portal.</p> 
 
        
    <p>Note that no effort was made to optimize the EPC as was done in standard LLRP.  All EPCs, regardless of length, are reported using the EPCData parameter.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjTagInformation : public CParameter
{
  public:
    CImpinjTagInformation (void);
    ~CImpinjTagInformation (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CEPCData * m_pEPCData;

  public:
    /** @brief Get accessor functions for the LLRP EPCData sub-parameter */  
    inline CEPCData *
    getEPCData (void)
    {
        return m_pEPCData;
    }

    /** @brief Set accessor functions for the LLRP EPCData sub-parameter */  
    EResultCode
    setEPCData (
      CEPCData * pValue);


  protected:
    CImpinjTagDirection * m_pImpinjTagDirection;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjTagDirection sub-parameter */  
    inline CImpinjTagDirection *
    getImpinjTagDirection (void)
    {
        return m_pImpinjTagDirection;
    }

    /** @brief Set accessor functions for the LLRP ImpinjTagDirection sub-parameter */  
    EResultCode
    setImpinjTagDirection (
      CImpinjTagDirection * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftConfiguration for LLRP parameter ImpinjForkliftConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the configuration for the forklift sensor board.  While this parameter does not carry any specific configuration items, it encapsulates those custom parameters that do.  This parameter may only be present in messages sent to Impinj reader model R1005.  Other reader models will respond with an error upon receiving this parameter.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjForkliftConfiguration : public CParameter
{
  public:
    CImpinjForkliftConfiguration (void);
    ~CImpinjForkliftConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjForkliftHeightThreshold * m_pImpinjForkliftHeightThreshold;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjForkliftHeightThreshold sub-parameter */  
    inline CImpinjForkliftHeightThreshold *
    getImpinjForkliftHeightThreshold (void)
    {
        return m_pImpinjForkliftHeightThreshold;
    }

    /** @brief Set accessor functions for the LLRP ImpinjForkliftHeightThreshold sub-parameter */  
    EResultCode
    setImpinjForkliftHeightThreshold (
      CImpinjForkliftHeightThreshold * pValue);


  protected:
    CImpinjForkliftZeroMotionTimeThreshold * m_pImpinjForkliftZeroMotionTimeThreshold;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjForkliftZeroMotionTimeThreshold sub-parameter */  
    inline CImpinjForkliftZeroMotionTimeThreshold *
    getImpinjForkliftZeroMotionTimeThreshold (void)
    {
        return m_pImpinjForkliftZeroMotionTimeThreshold;
    }

    /** @brief Set accessor functions for the LLRP ImpinjForkliftZeroMotionTimeThreshold sub-parameter */  
    EResultCode
    setImpinjForkliftZeroMotionTimeThreshold (
      CImpinjForkliftZeroMotionTimeThreshold * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftHeightThreshold for LLRP parameter ImpinjForkliftHeightThreshold
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the height threshold at which the Reader will issue a virtual GPI READER_EVENT_NOTIFICATION for the forklift arm height.  When the forklift arm raises above the threshold value, the virtual height GPI will transition high (1), and when the forklift arm lowers below the threshold value, the virtual height GPI will transition low (0).  For more information on the forklift virtual GPIs, please reference the Octane Forklift User's Guide.</p> 
 
        
    <p>The HeightThreshold field in this parameter is in centimeters.  However, the Reader will round the value specified in this field down to the nearest setting supported by the hardware.  For the R1005, the height resolution is in 5 cm increments.  Thus, a setting of 50 cm is valid and will read back as 50 cm.  A setting of 54 cm is also valid, but is rounded down to 50 cm and a subsequent read of this parameter will reflect the rounded value.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjForkliftHeightThreshold : public CParameter
{
  public:
    CImpinjForkliftHeightThreshold (void);
    ~CImpinjForkliftHeightThreshold (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_HeightThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHeightThreshold;
//@}

    /** @brief Get accessor functions for the LLRP HeightThreshold field */
    inline llrp_u16_t
    getHeightThreshold (void)
    {
        return m_HeightThreshold;
    }

    /** @brief Set accessor functions for the LLRP HeightThreshold field */
    inline void
    setHeightThreshold (
      llrp_u16_t value)
    {
        m_HeightThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftZeroMotionTimeThreshold for LLRP parameter ImpinjForkliftZeroMotionTimeThreshold
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the time threshold at which the Reader will issue a virtual GPI READER_EVENT_NOTIFICATION for forklift motion.  When the forklift has been motionless for a time greater than the threshold value, the virtual motion GPI will transition low (0), and when the forklift moves again, the virtual motion GPI will transition high (1).  For more information on the forklift virtual GPIs, please reference the Octane Forklift User's Guide.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjForkliftZeroMotionTimeThreshold : public CParameter
{
  public:
    CImpinjForkliftZeroMotionTimeThreshold (void);
    ~CImpinjForkliftZeroMotionTimeThreshold (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_ZeroMotionTimeThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdZeroMotionTimeThreshold;
//@}

    /** @brief Get accessor functions for the LLRP ZeroMotionTimeThreshold field */
    inline llrp_u16_t
    getZeroMotionTimeThreshold (void)
    {
        return m_ZeroMotionTimeThreshold;
    }

    /** @brief Set accessor functions for the LLRP ZeroMotionTimeThreshold field */
    inline void
    setZeroMotionTimeThreshold (
      llrp_u16_t value)
    {
        m_ZeroMotionTimeThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftCompanionBoardInfo for LLRP parameter ImpinjForkliftCompanionBoardInfo
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the version information for the accompanying forklift companion board. This is only valid on Forklift model readers.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjForkliftCompanionBoardInfo : public CParameter
{
  public:
    CImpinjForkliftCompanionBoardInfo (void);
    ~CImpinjForkliftCompanionBoardInfo (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_BoardManufacturer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBoardManufacturer;
//@}

    /** @brief Get accessor functions for the LLRP BoardManufacturer field */
    inline llrp_utf8v_t
    getBoardManufacturer (void)
    {
        return m_BoardManufacturer;
    }

    /** @brief Set accessor functions for the LLRP BoardManufacturer field */
    inline void
    setBoardManufacturer (
      llrp_utf8v_t value)
    {
        m_BoardManufacturer = value;
    }


  protected:
    llrp_u8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_u8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_u8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_u8v_t m_HardwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHardwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP HardwareVersion field */
    inline llrp_u8v_t
    getHardwareVersion (void)
    {
        return m_HardwareVersion;
    }

    /** @brief Set accessor functions for the LLRP HardwareVersion field */
    inline void
    setHardwareVersion (
      llrp_u8v_t value)
    {
        m_HardwareVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPIDebounceConfiguration for LLRP parameter ImpinjGPIDebounceConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter controls the GPI debounce timing. It is only available on Speedway Revolution readers. The GPIPortNum is the 1-based GPI number. Once a transition, rising or falling, is detected subsequent transitions are ignored for GPIDebounceTimerMSec milliseconds. GPIDebounceTimerMSec must be a multiple of 10ms. Setting GPIDebounceTimerMSec to zero effecitvely disables debounce. The debounced GPI affects triggered ROSpecs and GPIEvent reporting.</p> 
 
      <SMALL><i>Copyright 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjGPIDebounceConfiguration : public CParameter
{
  public:
    CImpinjGPIDebounceConfiguration (void);
    ~CImpinjGPIDebounceConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_GPIPortNum;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPIPortNum;
//@}

    /** @brief Get accessor functions for the LLRP GPIPortNum field */
    inline llrp_u16_t
    getGPIPortNum (void)
    {
        return m_GPIPortNum;
    }

    /** @brief Set accessor functions for the LLRP GPIPortNum field */
    inline void
    setGPIPortNum (
      llrp_u16_t value)
    {
        m_GPIPortNum = value;
    }


  protected:
    llrp_u32_t m_GPIDebounceTimerMSec;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPIDebounceTimerMSec;
//@}

    /** @brief Get accessor functions for the LLRP GPIDebounceTimerMSec field */
    inline llrp_u32_t
    getGPIDebounceTimerMSec (void)
    {
        return m_GPIDebounceTimerMSec;
    }

    /** @brief Set accessor functions for the LLRP GPIDebounceTimerMSec field */
    inline void
    setGPIDebounceTimerMSec (
      llrp_u32_t value)
    {
        m_GPIDebounceTimerMSec = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReaderTemperature for LLRP parameter ImpinjReaderTemperature
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the current temperature of the Reader in degrees Celsius. The temperature that is reported is the internal temperature of the Reader, not the ambient temperature of the Reader surroundings. The temperature is accurate to within +- 2 degrees Celsius across all operating temperatures.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjReaderTemperature : public CParameter
{
  public:
    CImpinjReaderTemperature (void);
    ~CImpinjReaderTemperature (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_Temperature;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTemperature;
//@}

    /** @brief Get accessor functions for the LLRP Temperature field */
    inline llrp_s16_t
    getTemperature (void)
    {
        return m_Temperature;
    }

    /** @brief Set accessor functions for the LLRP Temperature field */
    inline void
    setTemperature (
      llrp_s16_t value)
    {
        m_Temperature = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLinkMonitorConfiguration for LLRP parameter ImpinjLinkMonitorConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the Reader to monitor LLRP link health using KEEPALIVE and KEEPALIVE_ACK messages. When disabled or unsupported, the Reader ignores KEEPALIVE_ACK messages entirely. When this parameter is enabled, if the Reader fails to receive LinkDownThreshold consecutive KEEPALIVE_ACK messages from the Client, the Reader will close the current connection. Note that this parameter must be configured in conjunction with the KeepaliveSpec LLRP parameter in the standard LLRP configuration. The frequency with which the Reader is configured to send KEEPALIVE messages, along with the threshold set in this parameter determines how long the Reader will tolerate missing KEEPALIVE_ACK messages. The Reader uses the LLRP MessageID field to correlate KEEPALIVE and KEEPALIVE_ACK messages. Clients must send the same MessageID when responding to reader KEEPALIVE requests.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjLinkMonitorConfiguration : public CParameter
{
  public:
    CImpinjLinkMonitorConfiguration (void);
    ~CImpinjLinkMonitorConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLinkMonitorMode m_eLinkMonitorMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLinkMonitorMode;
//@}

    /** @brief Get accessor functions for the LLRP LinkMonitorMode field */
    inline EImpinjLinkMonitorMode
    getLinkMonitorMode (void)
    {
        return m_eLinkMonitorMode;
    }

    /** @brief Set accessor functions for the LLRP LinkMonitorMode field */
    inline void
    setLinkMonitorMode (
      EImpinjLinkMonitorMode value)
    {
        m_eLinkMonitorMode = value;
    }


  protected:
    llrp_u16_t m_LinkDownThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLinkDownThreshold;
//@}

    /** @brief Get accessor functions for the LLRP LinkDownThreshold field */
    inline llrp_u16_t
    getLinkDownThreshold (void)
    {
        return m_LinkDownThreshold;
    }

    /** @brief Set accessor functions for the LLRP LinkDownThreshold field */
    inline void
    setLinkDownThreshold (
      llrp_u16_t value)
    {
        m_LinkDownThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReportBufferConfiguration for LLRP parameter ImpinjReportBufferConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures how the Reader buffers asynchronous reports sent to the Client. In Normal mode, the Reader buffers RO_ACCESS_REPORT messages internally for an optimal time period before transmission over the network. Response messages, KEEPALIVE messages, and READER_EVENT_NOTIFICATION messages are not affected, and are sent immediately. In Low_Latency mode, the Reader sends RO_ACCESS_REPORT messages as soon as they are available. In general, the default mode is well suited to most applications. Applications requiring immediate access to inventory reports may require Low_Latency mode, but users should first evaluate network and system load.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjReportBufferConfiguration : public CParameter
{
  public:
    CImpinjReportBufferConfiguration (void);
    ~CImpinjReportBufferConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjReportBufferMode m_eReportBufferMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReportBufferMode;
//@}

    /** @brief Get accessor functions for the LLRP ReportBufferMode field */
    inline EImpinjReportBufferMode
    getReportBufferMode (void)
    {
        return m_eReportBufferMode;
    }

    /** @brief Set accessor functions for the LLRP ReportBufferMode field */
    inline void
    setReportBufferMode (
      EImpinjReportBufferMode value)
    {
        m_eReportBufferMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAccessSpecConfiguration for LLRP parameter ImpinjAccessSpecConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows for additional control over how the Reader executes AccessSpecs. This parameter does not contain any specific controls, but it encapsulates individual parameters that do. Each parameter contained within is optional, allowing for maximum flexibility for Client implementations.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjAccessSpecConfiguration : public CParameter
{
  public:
    CImpinjAccessSpecConfiguration (void);
    ~CImpinjAccessSpecConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjBlockWriteWordCount * m_pImpinjBlockWriteWordCount;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjBlockWriteWordCount sub-parameter */  
    inline CImpinjBlockWriteWordCount *
    getImpinjBlockWriteWordCount (void)
    {
        return m_pImpinjBlockWriteWordCount;
    }

    /** @brief Set accessor functions for the LLRP ImpinjBlockWriteWordCount sub-parameter */  
    EResultCode
    setImpinjBlockWriteWordCount (
      CImpinjBlockWriteWordCount * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockWriteWordCount for LLRP parameter ImpinjBlockWriteWordCount
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the number of words sent at a time to a tag when processing a C1G2BlockWrite OpSpec. The LLRP C1G2BlockWrite parameter has a word vector containing the data to be written to a tag. Internally the Reader breaks this vector up into individual C1G2 BlockWrite commands. This parameter determines the number of words sent via each BlockWrite command. Note that it is the user's responsibility to ensure that the tag population supports the BlockWrite word count configured via this parameter. BlockWrite commands to tags that do not support the configured word count will fail. The Reader automatically aligns C1G2BlockWrite commands to appropriate boundaries and accounts for odd data lengths. The default word count is one.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjBlockWriteWordCount : public CParameter
{
  public:
    CImpinjBlockWriteWordCount (void);
    ~CImpinjBlockWriteWordCount (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_WordCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdWordCount;
//@}

    /** @brief Get accessor functions for the LLRP WordCount field */
    inline llrp_u16_t
    getWordCount (void)
    {
        return m_WordCount;
    }

    /** @brief Set accessor functions for the LLRP WordCount field */
    inline void
    setWordCount (
      llrp_u16_t value)
    {
        m_WordCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockPermalock for LLRP parameter ImpinjBlockPermalock
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that configures the C1G2 BlockPermalock status of a particular memory bank from a tag. The AccessPassword field is the password required to move the tag into the secured state if needed.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjBlockPermalock : public CParameter
{
  public:
    CImpinjBlockPermalock (void);
    ~CImpinjBlockPermalock (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BlockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockPointer;
//@}

    /** @brief Get accessor functions for the LLRP BlockPointer field */
    inline llrp_u16_t
    getBlockPointer (void)
    {
        return m_BlockPointer;
    }

    /** @brief Set accessor functions for the LLRP BlockPointer field */
    inline void
    setBlockPointer (
      llrp_u16_t value)
    {
        m_BlockPointer = value;
    }


  protected:
    llrp_u16v_t m_BlockMask;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockMask;
//@}

    /** @brief Get accessor functions for the LLRP BlockMask field */
    inline llrp_u16v_t
    getBlockMask (void)
    {
        return m_BlockMask;
    }

    /** @brief Set accessor functions for the LLRP BlockMask field */
    inline void
    setBlockMask (
      llrp_u16v_t value)
    {
        m_BlockMask = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockPermalockOpSpecResult for LLRP parameter ImpinjBlockPermalockOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjBlockPermalock OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjBlockPermalockOpSpecResult : public CParameter
{
  public:
    CImpinjBlockPermalockOpSpecResult (void);
    ~CImpinjBlockPermalockOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjBlockPermalockResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjBlockPermalockResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjBlockPermalockResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetBlockPermalockStatus for LLRP parameter ImpinjGetBlockPermalockStatus
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that retrieves the C1G2 BlockPermalock status of a particular memory bank from a tag. The AccessPassword field is the password required to move the tag into the secured state if needed.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjGetBlockPermalockStatus : public CParameter
{
  public:
    CImpinjGetBlockPermalockStatus (void);
    ~CImpinjGetBlockPermalockStatus (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BlockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockPointer;
//@}

    /** @brief Get accessor functions for the LLRP BlockPointer field */
    inline llrp_u16_t
    getBlockPointer (void)
    {
        return m_BlockPointer;
    }

    /** @brief Set accessor functions for the LLRP BlockPointer field */
    inline void
    setBlockPointer (
      llrp_u16_t value)
    {
        m_BlockPointer = value;
    }


  protected:
    llrp_u16_t m_BlockRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockRange;
//@}

    /** @brief Get accessor functions for the LLRP BlockRange field */
    inline llrp_u16_t
    getBlockRange (void)
    {
        return m_BlockRange;
    }

    /** @brief Set accessor functions for the LLRP BlockRange field */
    inline void
    setBlockRange (
      llrp_u16_t value)
    {
        m_BlockRange = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetBlockPermalockStatusOpSpecResult for LLRP parameter ImpinjGetBlockPermalockStatusOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjGetBlockPermalockStatus OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjGetBlockPermalockStatusOpSpecResult : public CParameter
{
  public:
    CImpinjGetBlockPermalockStatusOpSpecResult (void);
    ~CImpinjGetBlockPermalockStatusOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGetBlockPermalockStatusResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjGetBlockPermalockStatusResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjGetBlockPermalockStatusResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u16v_t m_PermalockStatus;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPermalockStatus;
//@}

    /** @brief Get accessor functions for the LLRP PermalockStatus field */
    inline llrp_u16v_t
    getPermalockStatus (void)
    {
        return m_PermalockStatus;
    }

    /** @brief Set accessor functions for the LLRP PermalockStatus field */
    inline void
    setPermalockStatus (
      llrp_u16v_t value)
    {
        m_PermalockStatus = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSetQTConfig for LLRP parameter ImpinjSetQTConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that sets the QT TechnologyTM configuration on Impinj Monza 4QT tags. For more information on the meaning of the fields within this parameter, and the use cases for this technology, please reference the Impinj Monza 4QT datasheet.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjSetQTConfig : public CParameter
{
  public:
    CImpinjSetQTConfig (void);
    ~CImpinjSetQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  protected:
    EImpinjQTPersistence m_ePersistence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPersistence;
//@}

    /** @brief Get accessor functions for the LLRP Persistence field */
    inline EImpinjQTPersistence
    getPersistence (void)
    {
        return m_ePersistence;
    }

    /** @brief Set accessor functions for the LLRP Persistence field */
    inline void
    setPersistence (
      EImpinjQTPersistence value)
    {
        m_ePersistence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSetQTConfigOpSpecResult for LLRP parameter ImpinjSetQTConfigOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjSetQTConfig OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSetQTConfigOpSpecResult : public CParameter
{
  public:
    CImpinjSetQTConfigOpSpecResult (void);
    ~CImpinjSetQTConfigOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjSetQTConfigResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjSetQTConfigResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjSetQTConfigResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetQTConfig for LLRP parameter ImpinjGetQTConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that retrieves the QT TechnologyTM configuration on Impinj Monza 4QT tags. For more information on the meaning of the fields within this parameter, and the use cases for this technology, please reference the Impinj Monza 4QT datasheet.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGetQTConfig : public CParameter
{
  public:
    CImpinjGetQTConfig (void);
    ~CImpinjGetQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetQTConfigOpSpecResult for LLRP parameter ImpinjGetQTConfigOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjGetQTConfig OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjGetQTConfigOpSpecResult : public CParameter
{
  public:
    CImpinjGetQTConfigOpSpecResult (void);
    ~CImpinjGetQTConfigOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGetQTConfigResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjGetQTConfigResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjGetQTConfigResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagReportContentSelector for LLRP parameter ImpinjTagReportContentSelector
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures additional parameters to be reported via the TagReportData parameter. Each optional parameter individually enables/configures a particular feature. Note that because of how the ROReportSpec parameter is handled (see section 3.1.15), if the optional parameter used to control a particular feature is absent, the feature is considered disabled. See the documentation for the actual parameters for full feature descriptions.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjTagReportContentSelector : public CParameter
{
  public:
    CImpinjTagReportContentSelector (void);
    ~CImpinjTagReportContentSelector (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEnableSerializedTID * m_pImpinjEnableSerializedTID;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableSerializedTID sub-parameter */  
    inline CImpinjEnableSerializedTID *
    getImpinjEnableSerializedTID (void)
    {
        return m_pImpinjEnableSerializedTID;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableSerializedTID sub-parameter */  
    EResultCode
    setImpinjEnableSerializedTID (
      CImpinjEnableSerializedTID * pValue);


  protected:
    CImpinjEnableRFPhaseAngle * m_pImpinjEnableRFPhaseAngle;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableRFPhaseAngle sub-parameter */  
    inline CImpinjEnableRFPhaseAngle *
    getImpinjEnableRFPhaseAngle (void)
    {
        return m_pImpinjEnableRFPhaseAngle;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableRFPhaseAngle sub-parameter */  
    EResultCode
    setImpinjEnableRFPhaseAngle (
      CImpinjEnableRFPhaseAngle * pValue);


  protected:
    CImpinjEnablePeakRSSI * m_pImpinjEnablePeakRSSI;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnablePeakRSSI sub-parameter */  
    inline CImpinjEnablePeakRSSI *
    getImpinjEnablePeakRSSI (void)
    {
        return m_pImpinjEnablePeakRSSI;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnablePeakRSSI sub-parameter */  
    EResultCode
    setImpinjEnablePeakRSSI (
      CImpinjEnablePeakRSSI * pValue);


  protected:
    CImpinjEnableGPSCoordinates * m_pImpinjEnableGPSCoordinates;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableGPSCoordinates sub-parameter */  
    inline CImpinjEnableGPSCoordinates *
    getImpinjEnableGPSCoordinates (void)
    {
        return m_pImpinjEnableGPSCoordinates;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableGPSCoordinates sub-parameter */  
    EResultCode
    setImpinjEnableGPSCoordinates (
      CImpinjEnableGPSCoordinates * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableSerializedTID for LLRP parameter ImpinjEnableSerializedTID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjSerializedTID feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableSerializedTID : public CParameter
{
  public:
    CImpinjEnableSerializedTID (void);
    ~CImpinjEnableSerializedTID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjSerializedTIDMode m_eSerializedTIDMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerializedTIDMode;
//@}

    /** @brief Get accessor functions for the LLRP SerializedTIDMode field */
    inline EImpinjSerializedTIDMode
    getSerializedTIDMode (void)
    {
        return m_eSerializedTIDMode;
    }

    /** @brief Set accessor functions for the LLRP SerializedTIDMode field */
    inline void
    setSerializedTIDMode (
      EImpinjSerializedTIDMode value)
    {
        m_eSerializedTIDMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableRFPhaseAngle for LLRP parameter ImpinjEnableRFPhaseAngle
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjRFPhaseAngle feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableRFPhaseAngle : public CParameter
{
  public:
    CImpinjEnableRFPhaseAngle (void);
    ~CImpinjEnableRFPhaseAngle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRFPhaseAngleMode m_eRFPhaseAngleMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRFPhaseAngleMode;
//@}

    /** @brief Get accessor functions for the LLRP RFPhaseAngleMode field */
    inline EImpinjRFPhaseAngleMode
    getRFPhaseAngleMode (void)
    {
        return m_eRFPhaseAngleMode;
    }

    /** @brief Set accessor functions for the LLRP RFPhaseAngleMode field */
    inline void
    setRFPhaseAngleMode (
      EImpinjRFPhaseAngleMode value)
    {
        m_eRFPhaseAngleMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnablePeakRSSI for LLRP parameter ImpinjEnablePeakRSSI
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjPeakRSSI feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnablePeakRSSI : public CParameter
{
  public:
    CImpinjEnablePeakRSSI (void);
    ~CImpinjEnablePeakRSSI (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjPeakRSSIMode m_ePeakRSSIMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPeakRSSIMode;
//@}

    /** @brief Get accessor functions for the LLRP PeakRSSIMode field */
    inline EImpinjPeakRSSIMode
    getPeakRSSIMode (void)
    {
        return m_ePeakRSSIMode;
    }

    /** @brief Set accessor functions for the LLRP PeakRSSIMode field */
    inline void
    setPeakRSSIMode (
      EImpinjPeakRSSIMode value)
    {
        m_ePeakRSSIMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableGPSCoordinates for LLRP parameter ImpinjEnableGPSCoordinates
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjGPSCoordinates feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableGPSCoordinates : public CParameter
{
  public:
    CImpinjEnableGPSCoordinates (void);
    ~CImpinjEnableGPSCoordinates (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGPSCoordinatesMode m_eGPSCoordinatesMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPSCoordinatesMode;
//@}

    /** @brief Get accessor functions for the LLRP GPSCoordinatesMode field */
    inline EImpinjGPSCoordinatesMode
    getGPSCoordinatesMode (void)
    {
        return m_eGPSCoordinatesMode;
    }

    /** @brief Set accessor functions for the LLRP GPSCoordinatesMode field */
    inline void
    setGPSCoordinatesMode (
      EImpinjGPSCoordinatesMode value)
    {
        m_eGPSCoordinatesMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSerializedTID for LLRP parameter ImpinjSerializedTID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the content of the tag TID memory bank for tags supporting the ImpinjSerializedTID feature. Only the portion of the TID memory bank supported by the feature will be included and may vary from tag to tag. Tags inventoried that do not support the feature will omit this parameter from the TagReportData within the RO_ACCESS_REPORT.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjSerializedTID : public CParameter
{
  public:
    CImpinjSerializedTID (void);
    ~CImpinjSerializedTID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_TID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTID;
//@}

    /** @brief Get accessor functions for the LLRP TID field */
    inline llrp_u16v_t
    getTID (void)
    {
        return m_TID;
    }

    /** @brief Set accessor functions for the LLRP TID field */
    inline void
    setTID (
      llrp_u16v_t value)
    {
        m_TID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRFPhaseAngle for LLRP parameter ImpinjRFPhaseAngle
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the RF phase angle of a singulated tag during normal inventory (EPC backscatter). The PhaseAngle field is a scaled, 12-bit value, with 0 representing 0 degrees (0 radians), and 4096 representing 360 degrees (2 pi radians). If report accumulation is enabled via the ROReportSpec for the currently executing ROSpec, the RF phase angle reported via this parameter is the phase angle of the last tag singulation. No accumulation of phase data is available.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjRFPhaseAngle : public CParameter
{
  public:
    CImpinjRFPhaseAngle (void);
    ~CImpinjRFPhaseAngle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_PhaseAngle;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPhaseAngle;
//@}

    /** @brief Get accessor functions for the LLRP PhaseAngle field */
    inline llrp_u16_t
    getPhaseAngle (void)
    {
        return m_PhaseAngle;
    }

    /** @brief Set accessor functions for the LLRP PhaseAngle field */
    inline void
    setPhaseAngle (
      llrp_u16_t value)
    {
        m_PhaseAngle = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjPeakRSSI for LLRP parameter ImpinjPeakRSSI
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the peak RSSI of the tag during the current reporting interval. Standard LLRP reports peak RSSI in whole dBm units. This parameter provides the same RSSI value in more precise dBm x 100 units. Applications requiring precise RSSI calculations may enable this parameter instead of (or in addition to) the PeakRSSI LLRP parameter.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjPeakRSSI : public CParameter
{
  public:
    CImpinjPeakRSSI (void);
    ~CImpinjPeakRSSI (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_RSSI;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRSSI;
//@}

    /** @brief Get accessor functions for the LLRP RSSI field */
    inline llrp_s16_t
    getRSSI (void)
    {
        return m_RSSI;
    }

    /** @brief Set accessor functions for the LLRP RSSI field */
    inline void
    setRSSI (
      llrp_s16_t value)
    {
        m_RSSI = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPSCoordinates for LLRP parameter ImpinjGPSCoordinates
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the GPS coordinates of the reader when the tag was singulated. If the GPS receiver has not acquired a location fix, this parameter will not be included in the report. If LLRP accumulation is enabled, the reported coordinates correspond to the last known reader location when the tag was singulated. The GPS coordinates are reported in signed micro-degrees, so a minor conversion is required to convert the reported value to typically used GPS coordinate formats.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGPSCoordinates : public CParameter
{
  public:
    CImpinjGPSCoordinates (void);
    ~CImpinjGPSCoordinates (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s32_t m_Latitude;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLatitude;
//@}

    /** @brief Get accessor functions for the LLRP Latitude field */
    inline llrp_s32_t
    getLatitude (void)
    {
        return m_Latitude;
    }

    /** @brief Set accessor functions for the LLRP Latitude field */
    inline void
    setLatitude (
      llrp_s32_t value)
    {
        m_Latitude = value;
    }


  protected:
    llrp_s32_t m_Longitude;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLongitude;
//@}

    /** @brief Get accessor functions for the LLRP Longitude field */
    inline llrp_s32_t
    getLongitude (void)
    {
        return m_Longitude;
    }

    /** @brief Set accessor functions for the LLRP Longitude field */
    inline void
    setLongitude (
      llrp_s32_t value)
    {
        m_Longitude = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLoopSpec for LLRP parameter ImpinjLoopSpec
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the Reader to loop execution of AISpecs within a ROSpec. If included within the list of SpecParameters in a ROSpec, it must be the last SpecParameter present. There also must be at least one AISpec preceding the ImpinjLoopSpec parameter. If either condition is not met, the Reader will respond with an error.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjLoopSpec : public CParameter
{
  public:
    CImpinjLoopSpec (void);
    ~CImpinjLoopSpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_LoopCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLoopCount;
//@}

    /** @brief Get accessor functions for the LLRP LoopCount field */
    inline llrp_u32_t
    getLoopCount (void)
    {
        return m_LoopCount;
    }

    /** @brief Set accessor functions for the LLRP LoopCount field */
    inline void
    setLoopCount (
      llrp_u32_t value)
    {
        m_LoopCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPSNMEASentences for LLRP parameter ImpinjGPSNMEASentences
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter encapsulates the various NMEA (National Marine Electronic Association) sentences supported by the GPS device attached to the Reader. The Sierra Wireless PinPoint XT cellular modem supports GGA and RMC sentences. For more information regarding these sentences, visit the NMEA website.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGPSNMEASentences : public CParameter
{
  public:
    CImpinjGPSNMEASentences (void);
    ~CImpinjGPSNMEASentences (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjGGASentence * m_pImpinjGGASentence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjGGASentence sub-parameter */  
    inline CImpinjGGASentence *
    getImpinjGGASentence (void)
    {
        return m_pImpinjGGASentence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjGGASentence sub-parameter */  
    EResultCode
    setImpinjGGASentence (
      CImpinjGGASentence * pValue);


  protected:
    CImpinjRMCSentence * m_pImpinjRMCSentence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjRMCSentence sub-parameter */  
    inline CImpinjRMCSentence *
    getImpinjRMCSentence (void)
    {
        return m_pImpinjRMCSentence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjRMCSentence sub-parameter */  
    EResultCode
    setImpinjRMCSentence (
      CImpinjRMCSentence * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGGASentence for LLRP parameter ImpinjGGASentence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter contains the current GPS information of the Reader's location as reported in NMEA GGA sentence format. If the GPS device has not acquired a location fix, the string is reported empty.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjGGASentence : public CParameter
{
  public:
    CImpinjGGASentence (void);
    ~CImpinjGGASentence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_GGASentence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGGASentence;
//@}

    /** @brief Get accessor functions for the LLRP GGASentence field */
    inline llrp_utf8v_t
    getGGASentence (void)
    {
        return m_GGASentence;
    }

    /** @brief Set accessor functions for the LLRP GGASentence field */
    inline void
    setGGASentence (
      llrp_utf8v_t value)
    {
        m_GGASentence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRMCSentence for LLRP parameter ImpinjRMCSentence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter contains the current GPS information of the Reader's location as reported in NMEA RMC sentence format. If the GPS device has not acquired a location fix, the string is reported empty.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjRMCSentence : public CParameter
{
  public:
    CImpinjRMCSentence (void);
    ~CImpinjRMCSentence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_RMCSentence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRMCSentence;
//@}

    /** @brief Get accessor functions for the LLRP RMCSentence field */
    inline llrp_utf8v_t
    getRMCSentence (void)
    {
        return m_RMCSentence;
    }

    /** @brief Set accessor functions for the LLRP RMCSentence field */
    inline void
    setRMCSentence (
      llrp_utf8v_t value)
    {
        m_RMCSentence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/*@}*/ 


/** @brief Enrolls the types for Impinj into the LTKCPP registry
 ** 
 ** LTKCPP needs an internal registry for storing all the type information.  This function
 ** is required to enroll the types for the Impinj into
 ** the operating registry.  
 ** 
 ** For example -- in order to decode and encode packets from the core LLRP specification
 ** The user must EnrollCoreTypesIntoRegistry.
 **
 ** @ingroup LTKCoreElement
 */
extern void
enrollImpinjTypesIntoRegistry (
  CTypeRegistry *               pTypeRegistry);
