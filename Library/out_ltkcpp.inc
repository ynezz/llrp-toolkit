
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

  
/*
 * Namespace descriptors
 */

  
const CNamespaceDescriptor
g_nsdescllrp =
{
  "llrp",	// m_pPrefix
  "http://www.llrp.org/ltk/schema/core/encoding/xml/1.0",	// m_pURI
  "http://www.llrp.org/ltk/schema/core/encoding/xml/1.0/llrp.xsd",	// m_pSchemaLocation
};


/*
 * Enumeration string tables
 */

  
const SEnumTableEntry
g_estAirProtocols[] =
{
  
    {
        "Unspecified",
        AirProtocols_Unspecified,
    },
    {
        "EPCGlobalClass1Gen2",
        AirProtocols_EPCGlobalClass1Gen2,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estGetReaderCapabilitiesRequestedData[] =
{
  
    {
        "All",
        GetReaderCapabilitiesRequestedData_All,
    },
    {
        "General_Device_Capabilities",
        GetReaderCapabilitiesRequestedData_General_Device_Capabilities,
    },
    {
        "LLRP_Capabilities",
        GetReaderCapabilitiesRequestedData_LLRP_Capabilities,
    },
    {
        "Regulatory_Capabilities",
        GetReaderCapabilitiesRequestedData_Regulatory_Capabilities,
    },
    {
        "LLRP_Air_Protocol_Capabilities",
        GetReaderCapabilitiesRequestedData_LLRP_Air_Protocol_Capabilities,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estCommunicationsStandard[] =
{
  
    {
        "Unspecified",
        CommunicationsStandard_Unspecified,
    },
    {
        "US_FCC_Part_15",
        CommunicationsStandard_US_FCC_Part_15,
    },
    {
        "ETSI_302_208",
        CommunicationsStandard_ETSI_302_208,
    },
    {
        "ETSI_300_220",
        CommunicationsStandard_ETSI_300_220,
    },
    {
        "Australia_LIPD_1W",
        CommunicationsStandard_Australia_LIPD_1W,
    },
    {
        "Australia_LIPD_4W",
        CommunicationsStandard_Australia_LIPD_4W,
    },
    {
        "Japan_ARIB_STD_T89",
        CommunicationsStandard_Japan_ARIB_STD_T89,
    },
    {
        "Hong_Kong_OFTA_1049",
        CommunicationsStandard_Hong_Kong_OFTA_1049,
    },
    {
        "Taiwan_DGT_LP0002",
        CommunicationsStandard_Taiwan_DGT_LP0002,
    },
    {
        "Korea_MIC_Article_5_2",
        CommunicationsStandard_Korea_MIC_Article_5_2,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estROSpecState[] =
{
  
    {
        "Disabled",
        ROSpecState_Disabled,
    },
    {
        "Inactive",
        ROSpecState_Inactive,
    },
    {
        "Active",
        ROSpecState_Active,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estROSpecStartTriggerType[] =
{
  
    {
        "Null",
        ROSpecStartTriggerType_Null,
    },
    {
        "Immediate",
        ROSpecStartTriggerType_Immediate,
    },
    {
        "Periodic",
        ROSpecStartTriggerType_Periodic,
    },
    {
        "GPI",
        ROSpecStartTriggerType_GPI,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estROSpecStopTriggerType[] =
{
  
    {
        "Null",
        ROSpecStopTriggerType_Null,
    },
    {
        "Duration",
        ROSpecStopTriggerType_Duration,
    },
    {
        "GPI_With_Timeout",
        ROSpecStopTriggerType_GPI_With_Timeout,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estAISpecStopTriggerType[] =
{
  
    {
        "Null",
        AISpecStopTriggerType_Null,
    },
    {
        "Duration",
        AISpecStopTriggerType_Duration,
    },
    {
        "GPI_With_Timeout",
        AISpecStopTriggerType_GPI_With_Timeout,
    },
    {
        "Tag_Observation",
        AISpecStopTriggerType_Tag_Observation,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estTagObservationTriggerType[] =
{
  
    {
        "Upon_Seeing_N_Tags_Or_Timeout",
        TagObservationTriggerType_Upon_Seeing_N_Tags_Or_Timeout,
    },
    {
        "Upon_Seeing_No_More_New_Tags_For_Tms_Or_Timeout",
        TagObservationTriggerType_Upon_Seeing_No_More_New_Tags_For_Tms_Or_Timeout,
    },
    {
        "N_Attempts_To_See_All_Tags_In_FOV_Or_Timeout",
        TagObservationTriggerType_N_Attempts_To_See_All_Tags_In_FOV_Or_Timeout,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estRFSurveySpecStopTriggerType[] =
{
  
    {
        "Null",
        RFSurveySpecStopTriggerType_Null,
    },
    {
        "Duration",
        RFSurveySpecStopTriggerType_Duration,
    },
    {
        "N_Iterations_Through_Frequency_Range",
        RFSurveySpecStopTriggerType_N_Iterations_Through_Frequency_Range,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estAccessSpecState[] =
{
  
    {
        "Disabled",
        AccessSpecState_Disabled,
    },
    {
        "Active",
        AccessSpecState_Active,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estAccessSpecStopTriggerType[] =
{
  
    {
        "Null",
        AccessSpecStopTriggerType_Null,
    },
    {
        "Operation_Count",
        AccessSpecStopTriggerType_Operation_Count,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estGetReaderConfigRequestedData[] =
{
  
    {
        "All",
        GetReaderConfigRequestedData_All,
    },
    {
        "Identification",
        GetReaderConfigRequestedData_Identification,
    },
    {
        "AntennaProperties",
        GetReaderConfigRequestedData_AntennaProperties,
    },
    {
        "AntennaConfiguration",
        GetReaderConfigRequestedData_AntennaConfiguration,
    },
    {
        "ROReportSpec",
        GetReaderConfigRequestedData_ROReportSpec,
    },
    {
        "ReaderEventNotificationSpec",
        GetReaderConfigRequestedData_ReaderEventNotificationSpec,
    },
    {
        "AccessReportSpec",
        GetReaderConfigRequestedData_AccessReportSpec,
    },
    {
        "LLRPConfigurationStateValue",
        GetReaderConfigRequestedData_LLRPConfigurationStateValue,
    },
    {
        "KeepaliveSpec",
        GetReaderConfigRequestedData_KeepaliveSpec,
    },
    {
        "GPIPortCurrentState",
        GetReaderConfigRequestedData_GPIPortCurrentState,
    },
    {
        "GPOWriteData",
        GetReaderConfigRequestedData_GPOWriteData,
    },
    {
        "EventsAndReports",
        GetReaderConfigRequestedData_EventsAndReports,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estIdentificationType[] =
{
  
    {
        "MAC_Address",
        IdentificationType_MAC_Address,
    },
    {
        "EPC",
        IdentificationType_EPC,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estKeepaliveTriggerType[] =
{
  
    {
        "Null",
        KeepaliveTriggerType_Null,
    },
    {
        "Periodic",
        KeepaliveTriggerType_Periodic,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estGPIPortState[] =
{
  
    {
        "Low",
        GPIPortState_Low,
    },
    {
        "High",
        GPIPortState_High,
    },
    {
        "Unknown",
        GPIPortState_Unknown,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estROReportTriggerType[] =
{
  
    {
        "None",
        ROReportTriggerType_None,
    },
    {
        "Upon_N_Tags_Or_End_Of_AISpec",
        ROReportTriggerType_Upon_N_Tags_Or_End_Of_AISpec,
    },
    {
        "Upon_N_Tags_Or_End_Of_ROSpec",
        ROReportTriggerType_Upon_N_Tags_Or_End_Of_ROSpec,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estAccessReportTriggerType[] =
{
  
    {
        "Whenever_ROReport_Is_Generated",
        AccessReportTriggerType_Whenever_ROReport_Is_Generated,
    },
    {
        "End_Of_AccessSpec",
        AccessReportTriggerType_End_Of_AccessSpec,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estNotificationEventType[] =
{
  
    {
        "Upon_Hopping_To_Next_Channel",
        NotificationEventType_Upon_Hopping_To_Next_Channel,
    },
    {
        "GPI_Event",
        NotificationEventType_GPI_Event,
    },
    {
        "ROSpec_Event",
        NotificationEventType_ROSpec_Event,
    },
    {
        "Report_Buffer_Fill_Warning",
        NotificationEventType_Report_Buffer_Fill_Warning,
    },
    {
        "Reader_Exception_Event",
        NotificationEventType_Reader_Exception_Event,
    },
    {
        "RFSurvey_Event",
        NotificationEventType_RFSurvey_Event,
    },
    {
        "AISpec_Event",
        NotificationEventType_AISpec_Event,
    },
    {
        "AISpec_Event_With_Details",
        NotificationEventType_AISpec_Event_With_Details,
    },
    {
        "Antenna_Event",
        NotificationEventType_Antenna_Event,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estROSpecEventType[] =
{
  
    {
        "Start_Of_ROSpec",
        ROSpecEventType_Start_Of_ROSpec,
    },
    {
        "End_Of_ROSpec",
        ROSpecEventType_End_Of_ROSpec,
    },
    {
        "Preemption_Of_ROSpec",
        ROSpecEventType_Preemption_Of_ROSpec,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estRFSurveyEventType[] =
{
  
    {
        "Start_Of_RFSurvey",
        RFSurveyEventType_Start_Of_RFSurvey,
    },
    {
        "End_Of_RFSurvey",
        RFSurveyEventType_End_Of_RFSurvey,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estAISpecEventType[] =
{
  
    {
        "End_Of_AISpec",
        AISpecEventType_End_Of_AISpec,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estAntennaEventType[] =
{
  
    {
        "Antenna_Disconnected",
        AntennaEventType_Antenna_Disconnected,
    },
    {
        "Antenna_Connected",
        AntennaEventType_Antenna_Connected,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estConnectionAttemptStatusType[] =
{
  
    {
        "Success",
        ConnectionAttemptStatusType_Success,
    },
    {
        "Failed_A_Reader_Initiated_Connection_Already_Exists",
        ConnectionAttemptStatusType_Failed_A_Reader_Initiated_Connection_Already_Exists,
    },
    {
        "Failed_A_Client_Initiated_Connection_Already_Exists",
        ConnectionAttemptStatusType_Failed_A_Client_Initiated_Connection_Already_Exists,
    },
    {
        "Failed_Reason_Other_Than_A_Connection_Already_Exists",
        ConnectionAttemptStatusType_Failed_Reason_Other_Than_A_Connection_Already_Exists,
    },
    {
        "Another_Connection_Attempted",
        ConnectionAttemptStatusType_Another_Connection_Attempted,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estStatusCode[] =
{
  
    {
        "M_Success",
        StatusCode_M_Success,
    },
    {
        "M_ParameterError",
        StatusCode_M_ParameterError,
    },
    {
        "M_FieldError",
        StatusCode_M_FieldError,
    },
    {
        "M_UnexpectedParameter",
        StatusCode_M_UnexpectedParameter,
    },
    {
        "M_MissingParameter",
        StatusCode_M_MissingParameter,
    },
    {
        "M_DuplicateParameter",
        StatusCode_M_DuplicateParameter,
    },
    {
        "M_OverflowParameter",
        StatusCode_M_OverflowParameter,
    },
    {
        "M_OverflowField",
        StatusCode_M_OverflowField,
    },
    {
        "M_UnknownParameter",
        StatusCode_M_UnknownParameter,
    },
    {
        "M_UnknownField",
        StatusCode_M_UnknownField,
    },
    {
        "M_UnsupportedMessage",
        StatusCode_M_UnsupportedMessage,
    },
    {
        "M_UnsupportedVersion",
        StatusCode_M_UnsupportedVersion,
    },
    {
        "M_UnsupportedParameter",
        StatusCode_M_UnsupportedParameter,
    },
    {
        "P_ParameterError",
        StatusCode_P_ParameterError,
    },
    {
        "P_FieldError",
        StatusCode_P_FieldError,
    },
    {
        "P_UnexpectedParameter",
        StatusCode_P_UnexpectedParameter,
    },
    {
        "P_MissingParameter",
        StatusCode_P_MissingParameter,
    },
    {
        "P_DuplicateParameter",
        StatusCode_P_DuplicateParameter,
    },
    {
        "P_OverflowParameter",
        StatusCode_P_OverflowParameter,
    },
    {
        "P_OverflowField",
        StatusCode_P_OverflowField,
    },
    {
        "P_UnknownParameter",
        StatusCode_P_UnknownParameter,
    },
    {
        "P_UnknownField",
        StatusCode_P_UnknownField,
    },
    {
        "P_UnsupportedParameter",
        StatusCode_P_UnsupportedParameter,
    },
    {
        "A_Invalid",
        StatusCode_A_Invalid,
    },
    {
        "A_OutOfRange",
        StatusCode_A_OutOfRange,
    },
    {
        "R_DeviceError",
        StatusCode_R_DeviceError,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2DRValue[] =
{
  
    {
        "DRV_8",
        C1G2DRValue_DRV_8,
    },
    {
        "DRV_64_3",
        C1G2DRValue_DRV_64_3,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2MValue[] =
{
  
    {
        "MV_FM0",
        C1G2MValue_MV_FM0,
    },
    {
        "MV_2",
        C1G2MValue_MV_2,
    },
    {
        "MV_4",
        C1G2MValue_MV_4,
    },
    {
        "MV_8",
        C1G2MValue_MV_8,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2ForwardLinkModulation[] =
{
  
    {
        "PR_ASK",
        C1G2ForwardLinkModulation_PR_ASK,
    },
    {
        "SSB_ASK",
        C1G2ForwardLinkModulation_SSB_ASK,
    },
    {
        "DSB_ASK",
        C1G2ForwardLinkModulation_DSB_ASK,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2SpectralMaskIndicator[] =
{
  
    {
        "Unknown",
        C1G2SpectralMaskIndicator_Unknown,
    },
    {
        "SI",
        C1G2SpectralMaskIndicator_SI,
    },
    {
        "MI",
        C1G2SpectralMaskIndicator_MI,
    },
    {
        "DI",
        C1G2SpectralMaskIndicator_DI,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2TruncateAction[] =
{
  
    {
        "Unspecified",
        C1G2TruncateAction_Unspecified,
    },
    {
        "Do_Not_Truncate",
        C1G2TruncateAction_Do_Not_Truncate,
    },
    {
        "Truncate",
        C1G2TruncateAction_Truncate,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2StateAwareTarget[] =
{
  
    {
        "SL",
        C1G2StateAwareTarget_SL,
    },
    {
        "Inventoried_State_For_Session_S0",
        C1G2StateAwareTarget_Inventoried_State_For_Session_S0,
    },
    {
        "Inventoried_State_For_Session_S1",
        C1G2StateAwareTarget_Inventoried_State_For_Session_S1,
    },
    {
        "Inventoried_State_For_Session_S2",
        C1G2StateAwareTarget_Inventoried_State_For_Session_S2,
    },
    {
        "Inventoried_State_For_Session_S3",
        C1G2StateAwareTarget_Inventoried_State_For_Session_S3,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2StateAwareAction[] =
{
  
    {
        "AssertSLOrA_DeassertSLOrB",
        C1G2StateAwareAction_AssertSLOrA_DeassertSLOrB,
    },
    {
        "AssertSLOrA_Noop",
        C1G2StateAwareAction_AssertSLOrA_Noop,
    },
    {
        "Noop_DeassertSLOrB",
        C1G2StateAwareAction_Noop_DeassertSLOrB,
    },
    {
        "NegateSLOrABBA_Noop",
        C1G2StateAwareAction_NegateSLOrABBA_Noop,
    },
    {
        "DeassertSLOrB_AssertSLOrA",
        C1G2StateAwareAction_DeassertSLOrB_AssertSLOrA,
    },
    {
        "DeassertSLOrB_Noop",
        C1G2StateAwareAction_DeassertSLOrB_Noop,
    },
    {
        "Noop_AssertSLOrA",
        C1G2StateAwareAction_Noop_AssertSLOrA,
    },
    {
        "Noop_NegateSLOrABBA",
        C1G2StateAwareAction_Noop_NegateSLOrABBA,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2StateUnawareAction[] =
{
  
    {
        "Select_Unselect",
        C1G2StateUnawareAction_Select_Unselect,
    },
    {
        "Select_DoNothing",
        C1G2StateUnawareAction_Select_DoNothing,
    },
    {
        "DoNothing_Unselect",
        C1G2StateUnawareAction_DoNothing_Unselect,
    },
    {
        "Unselect_DoNothing",
        C1G2StateUnawareAction_Unselect_DoNothing,
    },
    {
        "Unselect_Select",
        C1G2StateUnawareAction_Unselect_Select,
    },
    {
        "DoNothing_Select",
        C1G2StateUnawareAction_DoNothing_Select,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2TagInventoryStateAwareI[] =
{
  
    {
        "State_A",
        C1G2TagInventoryStateAwareI_State_A,
    },
    {
        "State_B",
        C1G2TagInventoryStateAwareI_State_B,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2TagInventoryStateAwareS[] =
{
  
    {
        "SL",
        C1G2TagInventoryStateAwareS_SL,
    },
    {
        "Not_SL",
        C1G2TagInventoryStateAwareS_Not_SL,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2LockPrivilege[] =
{
  
    {
        "Read_Write",
        C1G2LockPrivilege_Read_Write,
    },
    {
        "Perma_Lock",
        C1G2LockPrivilege_Perma_Lock,
    },
    {
        "Perma_Unlock",
        C1G2LockPrivilege_Perma_Unlock,
    },
    {
        "Unlock",
        C1G2LockPrivilege_Unlock,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2LockDataField[] =
{
  
    {
        "Kill_Password",
        C1G2LockDataField_Kill_Password,
    },
    {
        "Access_Password",
        C1G2LockDataField_Access_Password,
    },
    {
        "EPC_Memory",
        C1G2LockDataField_EPC_Memory,
    },
    {
        "TID_Memory",
        C1G2LockDataField_TID_Memory,
    },
    {
        "User_Memory",
        C1G2LockDataField_User_Memory,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2ReadResultType[] =
{
  
    {
        "Success",
        C1G2ReadResultType_Success,
    },
    {
        "Nonspecific_Tag_Error",
        C1G2ReadResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        C1G2ReadResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        C1G2ReadResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2WriteResultType[] =
{
  
    {
        "Success",
        C1G2WriteResultType_Success,
    },
    {
        "Tag_Memory_Overrun_Error",
        C1G2WriteResultType_Tag_Memory_Overrun_Error,
    },
    {
        "Tag_Memory_Locked_Error",
        C1G2WriteResultType_Tag_Memory_Locked_Error,
    },
    {
        "Insufficient_Power",
        C1G2WriteResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        C1G2WriteResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        C1G2WriteResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        C1G2WriteResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2KillResultType[] =
{
  
    {
        "Success",
        C1G2KillResultType_Success,
    },
    {
        "Zero_Kill_Password_Error",
        C1G2KillResultType_Zero_Kill_Password_Error,
    },
    {
        "Insufficient_Power",
        C1G2KillResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        C1G2KillResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        C1G2KillResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        C1G2KillResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2LockResultType[] =
{
  
    {
        "Success",
        C1G2LockResultType_Success,
    },
    {
        "Insufficient_Power",
        C1G2LockResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        C1G2LockResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        C1G2LockResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        C1G2LockResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2BlockEraseResultType[] =
{
  
    {
        "Success",
        C1G2BlockEraseResultType_Success,
    },
    {
        "Tag_Memory_Overrun_Error",
        C1G2BlockEraseResultType_Tag_Memory_Overrun_Error,
    },
    {
        "Tag_Memory_Locked_Error",
        C1G2BlockEraseResultType_Tag_Memory_Locked_Error,
    },
    {
        "Insufficient_Power",
        C1G2BlockEraseResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        C1G2BlockEraseResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        C1G2BlockEraseResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        C1G2BlockEraseResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const SEnumTableEntry
g_estC1G2BlockWriteResultType[] =
{
  
    {
        "Success",
        C1G2BlockWriteResultType_Success,
    },
    {
        "Tag_Memory_Overrun_Error",
        C1G2BlockWriteResultType_Tag_Memory_Overrun_Error,
    },
    {
        "Tag_Memory_Locked_Error",
        C1G2BlockWriteResultType_Tag_Memory_Locked_Error,
    },
    {
        "Insufficient_Power",
        C1G2BlockWriteResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        C1G2BlockWriteResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        C1G2BlockWriteResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        C1G2BlockWriteResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};




/*
*****************************************************************
**
** Message CUSTOM_MESSAGE
**
*****************************************************************
*/
  

const CTypeDescriptor
CCUSTOM_MESSAGE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "CUSTOM_MESSAGE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    1023,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CCUSTOM_MESSAGE::s_apFieldDescriptorTable[] =
{
  
    &s_fdVendorIdentifier,
    &s_fdMessageSubtype,
    &s_fdData,
    NULL
};



const CFieldDescriptor
CCUSTOM_MESSAGE::s_fdVendorIdentifier =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "VendorIdentifier",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CCUSTOM_MESSAGE::s_fdMessageSubtype =
{
    CFieldDescriptor::FT_U8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MessageSubtype",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CCUSTOM_MESSAGE::s_fdData =
{
    CFieldDescriptor::FT_BYTESTOEND,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "Data",	// m_pName
    NULL	// m_pEnumTable
};
CCUSTOM_MESSAGE::CCUSTOM_MESSAGE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_VendorIdentifier = 0;
    m_MessageSubtype = 0;
}

CCUSTOM_MESSAGE::~CCUSTOM_MESSAGE (void)
{
}


CElement *
CCUSTOM_MESSAGE::s_construct (void)
{
    return (CElement *) new CCUSTOM_MESSAGE();
}


void
CCUSTOM_MESSAGE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CCUSTOM_MESSAGE * pTarget = (CCUSTOM_MESSAGE *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_VendorIdentifier = pDecoderStream->get_u32(&s_fdVendorIdentifier);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdVendorIdentifier);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MessageSubtype = pDecoderStream->get_u8(&s_fdMessageSubtype);
    }
    else
    {
        pDecoderStream->get_u8(&s_fdMessageSubtype);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Data = pDecoderStream->get_bytesToEnd(&s_fdData);
    }
    else
    {
        pDecoderStream->get_bytesToEnd(&s_fdData);
    }
    
}


void
CCUSTOM_MESSAGE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CCUSTOM_MESSAGE::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CCUSTOM_MESSAGE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_VendorIdentifier, &s_fdVendorIdentifier);

    pEncoderStream->put_u8(m_MessageSubtype, &s_fdMessageSubtype);

    pEncoderStream->put_bytesToEnd(m_Data, &s_fdData);

}




/*
*****************************************************************
**
** Message GET_READER_CAPABILITIES
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_READER_CAPABILITIES::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_READER_CAPABILITIES",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    1,	// m_TypeNum
    &CGET_READER_CAPABILITIES_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_READER_CAPABILITIES::s_apFieldDescriptorTable[] =
{
  
    &s_fdRequestedData,
    NULL
};



const CFieldDescriptor
CGET_READER_CAPABILITIES::s_fdRequestedData =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RequestedData",	// m_pName
    g_estGetReaderCapabilitiesRequestedData	// m_pEnumTable
};
CGET_READER_CAPABILITIES::CGET_READER_CAPABILITIES (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eRequestedData = (EGetReaderCapabilitiesRequestedData) 0;
}

CGET_READER_CAPABILITIES::~CGET_READER_CAPABILITIES (void)
{
}


CElement *
CGET_READER_CAPABILITIES::s_construct (void)
{
    return (CElement *) new CGET_READER_CAPABILITIES();
}


void
CGET_READER_CAPABILITIES::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_READER_CAPABILITIES * pTarget = (CGET_READER_CAPABILITIES *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eRequestedData = (EGetReaderCapabilitiesRequestedData) pDecoderStream->get_e8(&s_fdRequestedData);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdRequestedData);
    }

}


void
CGET_READER_CAPABILITIES::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_READER_CAPABILITIES::assimilateSubParameters (
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
CGET_READER_CAPABILITIES::addCustom (
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
CGET_READER_CAPABILITIES::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eRequestedData, &s_fdRequestedData);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Message GET_READER_CAPABILITIES_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_READER_CAPABILITIES_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_READER_CAPABILITIES_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    11,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_READER_CAPABILITIES_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_READER_CAPABILITIES_RESPONSE::CGET_READER_CAPABILITIES_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
    m_pGeneralDeviceCapabilities = NULL;
    m_pLLRPCapabilities = NULL;
    m_pRegulatoryCapabilities = NULL;
    m_pAirProtocolLLRPCapabilities = NULL;
}

CGET_READER_CAPABILITIES_RESPONSE::~CGET_READER_CAPABILITIES_RESPONSE (void)
{
}


CElement *
CGET_READER_CAPABILITIES_RESPONSE::s_construct (void)
{
    return (CElement *) new CGET_READER_CAPABILITIES_RESPONSE();
}


void
CGET_READER_CAPABILITIES_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_READER_CAPABILITIES_RESPONSE * pTarget = (CGET_READER_CAPABILITIES_RESPONSE *) pTargetElement;

  
}


void
CGET_READER_CAPABILITIES_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_READER_CAPABILITIES_RESPONSE::assimilateSubParameters (
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
    

    // 0-1 of GeneralDeviceCapabilities
    pType = &CGeneralDeviceCapabilities::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pGeneralDeviceCapabilities = (CGeneralDeviceCapabilities *)*Cur++;
    }
    

    // 0-1 of LLRPCapabilities
    pType = &CLLRPCapabilities::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pLLRPCapabilities = (CLLRPCapabilities *)*Cur++;
    }
    

    // 0-1 of RegulatoryCapabilities
    pType = &CRegulatoryCapabilities::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pRegulatoryCapabilities = (CRegulatoryCapabilities *)*Cur++;
    }
    

    // 0-1 of choice AirProtocolLLRPCapabilities
    pType = NULL;
  
    if(Cur != End && CAirProtocolLLRPCapabilities::isMember(*Cur))
    {
        m_pAirProtocolLLRPCapabilities = *Cur++;
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
CGET_READER_CAPABILITIES_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CAPABILITIES_RESPONSE::setGeneralDeviceCapabilities (
  CGeneralDeviceCapabilities *     pValue)
{
    removeSubParameterFromAllList(m_pGeneralDeviceCapabilities);
    delete m_pGeneralDeviceCapabilities;
    m_pGeneralDeviceCapabilities = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CAPABILITIES_RESPONSE::setLLRPCapabilities (
  CLLRPCapabilities *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPCapabilities);
    delete m_pLLRPCapabilities;
    m_pLLRPCapabilities = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CAPABILITIES_RESPONSE::setRegulatoryCapabilities (
  CRegulatoryCapabilities *     pValue)
{
    removeSubParameterFromAllList(m_pRegulatoryCapabilities);
    delete m_pRegulatoryCapabilities;
    m_pRegulatoryCapabilities = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CAPABILITIES_RESPONSE::setAirProtocolLLRPCapabilities (
  CParameter *                  pValue)
{
    if(!CAirProtocolLLRPCapabilities::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    removeSubParameterFromAllList(m_pAirProtocolLLRPCapabilities);
    delete m_pAirProtocolLLRPCapabilities;
    m_pAirProtocolLLRPCapabilities = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CAPABILITIES_RESPONSE::addCustom (
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
CGET_READER_CAPABILITIES_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
    pType = &CGeneralDeviceCapabilities::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pGeneralDeviceCapabilities, pType);
      
    pType = &CLLRPCapabilities::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pLLRPCapabilities, pType);
      
    pType = &CRegulatoryCapabilities::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pRegulatoryCapabilities, pType);
      
    pType = NULL;
      
    pEncoderStream->putOptionalSubParameter(m_pAirProtocolLLRPCapabilities, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Message ADD_ROSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CADD_ROSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ADD_ROSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    20,	// m_TypeNum
    &CADD_ROSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CADD_ROSPEC::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CADD_ROSPEC::CADD_ROSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pROSpec = NULL;
}

CADD_ROSPEC::~CADD_ROSPEC (void)
{
}


CElement *
CADD_ROSPEC::s_construct (void)
{
    return (CElement *) new CADD_ROSPEC();
}


void
CADD_ROSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CADD_ROSPEC * pTarget = (CADD_ROSPEC *) pTargetElement;

  
}


void
CADD_ROSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CADD_ROSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of ROSpec
    pType = &CROSpec::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pROSpec = (CROSpec *)*Cur++;
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CADD_ROSPEC::setROSpec (
  CROSpec *     pValue)
{
    removeSubParameterFromAllList(m_pROSpec);
    delete m_pROSpec;
    m_pROSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CADD_ROSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CROSpec::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pROSpec, pType);
      
}




/*
*****************************************************************
**
** Message ADD_ROSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CADD_ROSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ADD_ROSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    30,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CADD_ROSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CADD_ROSPEC_RESPONSE::CADD_ROSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CADD_ROSPEC_RESPONSE::~CADD_ROSPEC_RESPONSE (void)
{
}


CElement *
CADD_ROSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CADD_ROSPEC_RESPONSE();
}


void
CADD_ROSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CADD_ROSPEC_RESPONSE * pTarget = (CADD_ROSPEC_RESPONSE *) pTargetElement;

  
}


void
CADD_ROSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CADD_ROSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CADD_ROSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CADD_ROSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message DELETE_ROSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CDELETE_ROSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DELETE_ROSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    21,	// m_TypeNum
    &CDELETE_ROSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDELETE_ROSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CDELETE_ROSPEC::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CDELETE_ROSPEC::CDELETE_ROSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
}

CDELETE_ROSPEC::~CDELETE_ROSPEC (void)
{
}


CElement *
CDELETE_ROSPEC::s_construct (void)
{
    return (CElement *) new CDELETE_ROSPEC();
}


void
CDELETE_ROSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDELETE_ROSPEC * pTarget = (CDELETE_ROSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CDELETE_ROSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDELETE_ROSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CDELETE_ROSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

}




/*
*****************************************************************
**
** Message DELETE_ROSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CDELETE_ROSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DELETE_ROSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    31,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDELETE_ROSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CDELETE_ROSPEC_RESPONSE::CDELETE_ROSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CDELETE_ROSPEC_RESPONSE::~CDELETE_ROSPEC_RESPONSE (void)
{
}


CElement *
CDELETE_ROSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CDELETE_ROSPEC_RESPONSE();
}


void
CDELETE_ROSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDELETE_ROSPEC_RESPONSE * pTarget = (CDELETE_ROSPEC_RESPONSE *) pTargetElement;

  
}


void
CDELETE_ROSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDELETE_ROSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CDELETE_ROSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CDELETE_ROSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message START_ROSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CSTART_ROSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "START_ROSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    22,	// m_TypeNum
    &CSTART_ROSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSTART_ROSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CSTART_ROSPEC::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CSTART_ROSPEC::CSTART_ROSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
}

CSTART_ROSPEC::~CSTART_ROSPEC (void)
{
}


CElement *
CSTART_ROSPEC::s_construct (void)
{
    return (CElement *) new CSTART_ROSPEC();
}


void
CSTART_ROSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSTART_ROSPEC * pTarget = (CSTART_ROSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CSTART_ROSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSTART_ROSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CSTART_ROSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

}




/*
*****************************************************************
**
** Message START_ROSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CSTART_ROSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "START_ROSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    32,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSTART_ROSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CSTART_ROSPEC_RESPONSE::CSTART_ROSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CSTART_ROSPEC_RESPONSE::~CSTART_ROSPEC_RESPONSE (void)
{
}


CElement *
CSTART_ROSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CSTART_ROSPEC_RESPONSE();
}


void
CSTART_ROSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSTART_ROSPEC_RESPONSE * pTarget = (CSTART_ROSPEC_RESPONSE *) pTargetElement;

  
}


void
CSTART_ROSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSTART_ROSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CSTART_ROSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CSTART_ROSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message STOP_ROSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CSTOP_ROSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "STOP_ROSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    23,	// m_TypeNum
    &CSTOP_ROSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSTOP_ROSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CSTOP_ROSPEC::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CSTOP_ROSPEC::CSTOP_ROSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
}

CSTOP_ROSPEC::~CSTOP_ROSPEC (void)
{
}


CElement *
CSTOP_ROSPEC::s_construct (void)
{
    return (CElement *) new CSTOP_ROSPEC();
}


void
CSTOP_ROSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSTOP_ROSPEC * pTarget = (CSTOP_ROSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CSTOP_ROSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSTOP_ROSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CSTOP_ROSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

}




/*
*****************************************************************
**
** Message STOP_ROSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CSTOP_ROSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "STOP_ROSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    33,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSTOP_ROSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CSTOP_ROSPEC_RESPONSE::CSTOP_ROSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CSTOP_ROSPEC_RESPONSE::~CSTOP_ROSPEC_RESPONSE (void)
{
}


CElement *
CSTOP_ROSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CSTOP_ROSPEC_RESPONSE();
}


void
CSTOP_ROSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSTOP_ROSPEC_RESPONSE * pTarget = (CSTOP_ROSPEC_RESPONSE *) pTargetElement;

  
}


void
CSTOP_ROSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSTOP_ROSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CSTOP_ROSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CSTOP_ROSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message ENABLE_ROSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CENABLE_ROSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ENABLE_ROSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    24,	// m_TypeNum
    &CENABLE_ROSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CENABLE_ROSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CENABLE_ROSPEC::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CENABLE_ROSPEC::CENABLE_ROSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
}

CENABLE_ROSPEC::~CENABLE_ROSPEC (void)
{
}


CElement *
CENABLE_ROSPEC::s_construct (void)
{
    return (CElement *) new CENABLE_ROSPEC();
}


void
CENABLE_ROSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CENABLE_ROSPEC * pTarget = (CENABLE_ROSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CENABLE_ROSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CENABLE_ROSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CENABLE_ROSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

}




/*
*****************************************************************
**
** Message ENABLE_ROSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CENABLE_ROSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ENABLE_ROSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    34,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CENABLE_ROSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CENABLE_ROSPEC_RESPONSE::CENABLE_ROSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CENABLE_ROSPEC_RESPONSE::~CENABLE_ROSPEC_RESPONSE (void)
{
}


CElement *
CENABLE_ROSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CENABLE_ROSPEC_RESPONSE();
}


void
CENABLE_ROSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CENABLE_ROSPEC_RESPONSE * pTarget = (CENABLE_ROSPEC_RESPONSE *) pTargetElement;

  
}


void
CENABLE_ROSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CENABLE_ROSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CENABLE_ROSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CENABLE_ROSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message DISABLE_ROSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CDISABLE_ROSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DISABLE_ROSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    25,	// m_TypeNum
    &CDISABLE_ROSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDISABLE_ROSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CDISABLE_ROSPEC::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CDISABLE_ROSPEC::CDISABLE_ROSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
}

CDISABLE_ROSPEC::~CDISABLE_ROSPEC (void)
{
}


CElement *
CDISABLE_ROSPEC::s_construct (void)
{
    return (CElement *) new CDISABLE_ROSPEC();
}


void
CDISABLE_ROSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDISABLE_ROSPEC * pTarget = (CDISABLE_ROSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CDISABLE_ROSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDISABLE_ROSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CDISABLE_ROSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

}




/*
*****************************************************************
**
** Message DISABLE_ROSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CDISABLE_ROSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DISABLE_ROSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    35,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDISABLE_ROSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CDISABLE_ROSPEC_RESPONSE::CDISABLE_ROSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CDISABLE_ROSPEC_RESPONSE::~CDISABLE_ROSPEC_RESPONSE (void)
{
}


CElement *
CDISABLE_ROSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CDISABLE_ROSPEC_RESPONSE();
}


void
CDISABLE_ROSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDISABLE_ROSPEC_RESPONSE * pTarget = (CDISABLE_ROSPEC_RESPONSE *) pTargetElement;

  
}


void
CDISABLE_ROSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDISABLE_ROSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CDISABLE_ROSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CDISABLE_ROSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message GET_ROSPECS
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_ROSPECS::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_ROSPECS",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    26,	// m_TypeNum
    &CGET_ROSPECS_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_ROSPECS::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_ROSPECS::CGET_ROSPECS (void)
{
    m_pType = &s_typeDescriptor;
  
}

CGET_ROSPECS::~CGET_ROSPECS (void)
{
}


CElement *
CGET_ROSPECS::s_construct (void)
{
    return (CElement *) new CGET_ROSPECS();
}


void
CGET_ROSPECS::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_ROSPECS * pTarget = (CGET_ROSPECS *) pTargetElement;

  
}


void
CGET_ROSPECS::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_ROSPECS::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGET_ROSPECS::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message GET_ROSPECS_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_ROSPECS_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_ROSPECS_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    36,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_ROSPECS_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_ROSPECS_RESPONSE::CGET_ROSPECS_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CGET_ROSPECS_RESPONSE::~CGET_ROSPECS_RESPONSE (void)
{
}


CElement *
CGET_ROSPECS_RESPONSE::s_construct (void)
{
    return (CElement *) new CGET_ROSPECS_RESPONSE();
}


void
CGET_ROSPECS_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_ROSPECS_RESPONSE * pTarget = (CGET_ROSPECS_RESPONSE *) pTargetElement;

  
}


void
CGET_ROSPECS_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_ROSPECS_RESPONSE::assimilateSubParameters (
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
    

    // 0-N of ROSpec
    pType = &CROSpec::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listROSpec.push_back((CROSpec *)*Cur);
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
CGET_ROSPECS_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_ROSPECS_RESPONSE::addROSpec (
  CROSpec *     pValue)
{
    m_listROSpec.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CGET_ROSPECS_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
    pType = &CROSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listROSpec, pType);
      
}




/*
*****************************************************************
**
** Message ADD_ACCESSSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CADD_ACCESSSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ADD_ACCESSSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    40,	// m_TypeNum
    &CADD_ACCESSSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CADD_ACCESSSPEC::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CADD_ACCESSSPEC::CADD_ACCESSSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pAccessSpec = NULL;
}

CADD_ACCESSSPEC::~CADD_ACCESSSPEC (void)
{
}


CElement *
CADD_ACCESSSPEC::s_construct (void)
{
    return (CElement *) new CADD_ACCESSSPEC();
}


void
CADD_ACCESSSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CADD_ACCESSSPEC * pTarget = (CADD_ACCESSSPEC *) pTargetElement;

  
}


void
CADD_ACCESSSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CADD_ACCESSSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of AccessSpec
    pType = &CAccessSpec::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pAccessSpec = (CAccessSpec *)*Cur++;
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CADD_ACCESSSPEC::setAccessSpec (
  CAccessSpec *     pValue)
{
    removeSubParameterFromAllList(m_pAccessSpec);
    delete m_pAccessSpec;
    m_pAccessSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CADD_ACCESSSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CAccessSpec::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pAccessSpec, pType);
      
}




/*
*****************************************************************
**
** Message ADD_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CADD_ACCESSSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ADD_ACCESSSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    50,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CADD_ACCESSSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CADD_ACCESSSPEC_RESPONSE::CADD_ACCESSSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CADD_ACCESSSPEC_RESPONSE::~CADD_ACCESSSPEC_RESPONSE (void)
{
}


CElement *
CADD_ACCESSSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CADD_ACCESSSPEC_RESPONSE();
}


void
CADD_ACCESSSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CADD_ACCESSSPEC_RESPONSE * pTarget = (CADD_ACCESSSPEC_RESPONSE *) pTargetElement;

  
}


void
CADD_ACCESSSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CADD_ACCESSSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CADD_ACCESSSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CADD_ACCESSSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message DELETE_ACCESSSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CDELETE_ACCESSSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DELETE_ACCESSSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    41,	// m_TypeNum
    &CDELETE_ACCESSSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDELETE_ACCESSSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessSpecID,
    NULL
};



const CFieldDescriptor
CDELETE_ACCESSSPEC::s_fdAccessSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CDELETE_ACCESSSPEC::CDELETE_ACCESSSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AccessSpecID = 0;
}

CDELETE_ACCESSSPEC::~CDELETE_ACCESSSPEC (void)
{
}


CElement *
CDELETE_ACCESSSPEC::s_construct (void)
{
    return (CElement *) new CDELETE_ACCESSSPEC();
}


void
CDELETE_ACCESSSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDELETE_ACCESSSPEC * pTarget = (CDELETE_ACCESSSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AccessSpecID = pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    
}


void
CDELETE_ACCESSSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDELETE_ACCESSSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CDELETE_ACCESSSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_AccessSpecID, &s_fdAccessSpecID);

}




/*
*****************************************************************
**
** Message DELETE_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CDELETE_ACCESSSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DELETE_ACCESSSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    51,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDELETE_ACCESSSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CDELETE_ACCESSSPEC_RESPONSE::CDELETE_ACCESSSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CDELETE_ACCESSSPEC_RESPONSE::~CDELETE_ACCESSSPEC_RESPONSE (void)
{
}


CElement *
CDELETE_ACCESSSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CDELETE_ACCESSSPEC_RESPONSE();
}


void
CDELETE_ACCESSSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDELETE_ACCESSSPEC_RESPONSE * pTarget = (CDELETE_ACCESSSPEC_RESPONSE *) pTargetElement;

  
}


void
CDELETE_ACCESSSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDELETE_ACCESSSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CDELETE_ACCESSSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CDELETE_ACCESSSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message ENABLE_ACCESSSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CENABLE_ACCESSSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ENABLE_ACCESSSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    42,	// m_TypeNum
    &CENABLE_ACCESSSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CENABLE_ACCESSSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessSpecID,
    NULL
};



const CFieldDescriptor
CENABLE_ACCESSSPEC::s_fdAccessSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CENABLE_ACCESSSPEC::CENABLE_ACCESSSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AccessSpecID = 0;
}

CENABLE_ACCESSSPEC::~CENABLE_ACCESSSPEC (void)
{
}


CElement *
CENABLE_ACCESSSPEC::s_construct (void)
{
    return (CElement *) new CENABLE_ACCESSSPEC();
}


void
CENABLE_ACCESSSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CENABLE_ACCESSSPEC * pTarget = (CENABLE_ACCESSSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AccessSpecID = pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    
}


void
CENABLE_ACCESSSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CENABLE_ACCESSSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CENABLE_ACCESSSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_AccessSpecID, &s_fdAccessSpecID);

}




/*
*****************************************************************
**
** Message ENABLE_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CENABLE_ACCESSSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ENABLE_ACCESSSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    52,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CENABLE_ACCESSSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CENABLE_ACCESSSPEC_RESPONSE::CENABLE_ACCESSSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CENABLE_ACCESSSPEC_RESPONSE::~CENABLE_ACCESSSPEC_RESPONSE (void)
{
}


CElement *
CENABLE_ACCESSSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CENABLE_ACCESSSPEC_RESPONSE();
}


void
CENABLE_ACCESSSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CENABLE_ACCESSSPEC_RESPONSE * pTarget = (CENABLE_ACCESSSPEC_RESPONSE *) pTargetElement;

  
}


void
CENABLE_ACCESSSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CENABLE_ACCESSSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CENABLE_ACCESSSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CENABLE_ACCESSSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message DISABLE_ACCESSSPEC
**
*****************************************************************
*/
  

const CTypeDescriptor
CDISABLE_ACCESSSPEC::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DISABLE_ACCESSSPEC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    43,	// m_TypeNum
    &CDISABLE_ACCESSSPEC_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDISABLE_ACCESSSPEC::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessSpecID,
    NULL
};



const CFieldDescriptor
CDISABLE_ACCESSSPEC::s_fdAccessSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CDISABLE_ACCESSSPEC::CDISABLE_ACCESSSPEC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AccessSpecID = 0;
}

CDISABLE_ACCESSSPEC::~CDISABLE_ACCESSSPEC (void)
{
}


CElement *
CDISABLE_ACCESSSPEC::s_construct (void)
{
    return (CElement *) new CDISABLE_ACCESSSPEC();
}


void
CDISABLE_ACCESSSPEC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDISABLE_ACCESSSPEC * pTarget = (CDISABLE_ACCESSSPEC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AccessSpecID = pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    
}


void
CDISABLE_ACCESSSPEC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDISABLE_ACCESSSPEC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CDISABLE_ACCESSSPEC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_AccessSpecID, &s_fdAccessSpecID);

}




/*
*****************************************************************
**
** Message DISABLE_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CDISABLE_ACCESSSPEC_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "DISABLE_ACCESSSPEC_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    53,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CDISABLE_ACCESSSPEC_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CDISABLE_ACCESSSPEC_RESPONSE::CDISABLE_ACCESSSPEC_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CDISABLE_ACCESSSPEC_RESPONSE::~CDISABLE_ACCESSSPEC_RESPONSE (void)
{
}


CElement *
CDISABLE_ACCESSSPEC_RESPONSE::s_construct (void)
{
    return (CElement *) new CDISABLE_ACCESSSPEC_RESPONSE();
}


void
CDISABLE_ACCESSSPEC_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CDISABLE_ACCESSSPEC_RESPONSE * pTarget = (CDISABLE_ACCESSSPEC_RESPONSE *) pTargetElement;

  
}


void
CDISABLE_ACCESSSPEC_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CDISABLE_ACCESSSPEC_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CDISABLE_ACCESSSPEC_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CDISABLE_ACCESSSPEC_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message GET_ACCESSSPECS
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_ACCESSSPECS::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_ACCESSSPECS",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    44,	// m_TypeNum
    &CGET_ACCESSSPECS_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_ACCESSSPECS::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_ACCESSSPECS::CGET_ACCESSSPECS (void)
{
    m_pType = &s_typeDescriptor;
  
}

CGET_ACCESSSPECS::~CGET_ACCESSSPECS (void)
{
}


CElement *
CGET_ACCESSSPECS::s_construct (void)
{
    return (CElement *) new CGET_ACCESSSPECS();
}


void
CGET_ACCESSSPECS::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_ACCESSSPECS * pTarget = (CGET_ACCESSSPECS *) pTargetElement;

  
}


void
CGET_ACCESSSPECS::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_ACCESSSPECS::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGET_ACCESSSPECS::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message GET_ACCESSSPECS_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_ACCESSSPECS_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_ACCESSSPECS_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    54,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_ACCESSSPECS_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_ACCESSSPECS_RESPONSE::CGET_ACCESSSPECS_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CGET_ACCESSSPECS_RESPONSE::~CGET_ACCESSSPECS_RESPONSE (void)
{
}


CElement *
CGET_ACCESSSPECS_RESPONSE::s_construct (void)
{
    return (CElement *) new CGET_ACCESSSPECS_RESPONSE();
}


void
CGET_ACCESSSPECS_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_ACCESSSPECS_RESPONSE * pTarget = (CGET_ACCESSSPECS_RESPONSE *) pTargetElement;

  
}


void
CGET_ACCESSSPECS_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_ACCESSSPECS_RESPONSE::assimilateSubParameters (
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
    

    // 0-N of AccessSpec
    pType = &CAccessSpec::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listAccessSpec.push_back((CAccessSpec *)*Cur);
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
CGET_ACCESSSPECS_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_ACCESSSPECS_RESPONSE::addAccessSpec (
  CAccessSpec *     pValue)
{
    m_listAccessSpec.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CGET_ACCESSSPECS_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
    pType = &CAccessSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAccessSpec, pType);
      
}




/*
*****************************************************************
**
** Message GET_READER_CONFIG
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_READER_CONFIG::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_READER_CONFIG",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    2,	// m_TypeNum
    &CGET_READER_CONFIG_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_READER_CONFIG::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaID,
    &s_fdRequestedData,
    &s_fdGPIPortNum,
    &s_fdGPOPortNum,
    NULL
};



const CFieldDescriptor
CGET_READER_CONFIG::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGET_READER_CONFIG::s_fdRequestedData =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "RequestedData",	// m_pName
    g_estGetReaderConfigRequestedData	// m_pEnumTable
};


const CFieldDescriptor
CGET_READER_CONFIG::s_fdGPIPortNum =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIPortNum",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGET_READER_CONFIG::s_fdGPOPortNum =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPOPortNum",	// m_pName
    NULL	// m_pEnumTable
};
CGET_READER_CONFIG::CGET_READER_CONFIG (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaID = 0;
    m_eRequestedData = (EGetReaderConfigRequestedData) 0;
    m_GPIPortNum = 0;
    m_GPOPortNum = 0;
}

CGET_READER_CONFIG::~CGET_READER_CONFIG (void)
{
}


CElement *
CGET_READER_CONFIG::s_construct (void)
{
    return (CElement *) new CGET_READER_CONFIG();
}


void
CGET_READER_CONFIG::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_READER_CONFIG * pTarget = (CGET_READER_CONFIG *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eRequestedData = (EGetReaderConfigRequestedData) pDecoderStream->get_e8(&s_fdRequestedData);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdRequestedData);
    }

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
        pTarget->m_GPOPortNum = pDecoderStream->get_u16(&s_fdGPOPortNum);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdGPOPortNum);
    }
    
}


void
CGET_READER_CONFIG::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_READER_CONFIG::assimilateSubParameters (
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
CGET_READER_CONFIG::addCustom (
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
CGET_READER_CONFIG::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pEncoderStream->put_e8((int)m_eRequestedData, &s_fdRequestedData);

    pEncoderStream->put_u16(m_GPIPortNum, &s_fdGPIPortNum);

    pEncoderStream->put_u16(m_GPOPortNum, &s_fdGPOPortNum);

    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Message GET_READER_CONFIG_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_READER_CONFIG_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_READER_CONFIG_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    12,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_READER_CONFIG_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_READER_CONFIG_RESPONSE::CGET_READER_CONFIG_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
    m_pIdentification = NULL;
    m_pReaderEventNotificationSpec = NULL;
    m_pROReportSpec = NULL;
    m_pAccessReportSpec = NULL;
    m_pLLRPConfigurationStateValue = NULL;
    m_pKeepaliveSpec = NULL;
    m_pEventsAndReports = NULL;
}

CGET_READER_CONFIG_RESPONSE::~CGET_READER_CONFIG_RESPONSE (void)
{
}


CElement *
CGET_READER_CONFIG_RESPONSE::s_construct (void)
{
    return (CElement *) new CGET_READER_CONFIG_RESPONSE();
}


void
CGET_READER_CONFIG_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_READER_CONFIG_RESPONSE * pTarget = (CGET_READER_CONFIG_RESPONSE *) pTargetElement;

  
}


void
CGET_READER_CONFIG_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_READER_CONFIG_RESPONSE::assimilateSubParameters (
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
    

    // 0-1 of Identification
    pType = &CIdentification::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pIdentification = (CIdentification *)*Cur++;
    }
    

    // 0-N of AntennaProperties
    pType = &CAntennaProperties::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listAntennaProperties.push_back((CAntennaProperties *)*Cur);
        Cur++;
    }
    

    // 0-N of AntennaConfiguration
    pType = &CAntennaConfiguration::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listAntennaConfiguration.push_back((CAntennaConfiguration *)*Cur);
        Cur++;
    }
    

    // 0-1 of ReaderEventNotificationSpec
    pType = &CReaderEventNotificationSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pReaderEventNotificationSpec = (CReaderEventNotificationSpec *)*Cur++;
    }
    

    // 0-1 of ROReportSpec
    pType = &CROReportSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROReportSpec = (CROReportSpec *)*Cur++;
    }
    

    // 0-1 of AccessReportSpec
    pType = &CAccessReportSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAccessReportSpec = (CAccessReportSpec *)*Cur++;
    }
    

    // 0-1 of LLRPConfigurationStateValue
    pType = &CLLRPConfigurationStateValue::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pLLRPConfigurationStateValue = (CLLRPConfigurationStateValue *)*Cur++;
    }
    

    // 0-1 of KeepaliveSpec
    pType = &CKeepaliveSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pKeepaliveSpec = (CKeepaliveSpec *)*Cur++;
    }
    

    // 0-N of GPIPortCurrentState
    pType = &CGPIPortCurrentState::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listGPIPortCurrentState.push_back((CGPIPortCurrentState *)*Cur);
        Cur++;
    }
    

    // 0-N of GPOWriteData
    pType = &CGPOWriteData::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listGPOWriteData.push_back((CGPOWriteData *)*Cur);
        Cur++;
    }
    

    // 0-1 of EventsAndReports
    pType = &CEventsAndReports::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pEventsAndReports = (CEventsAndReports *)*Cur++;
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
CGET_READER_CONFIG_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setIdentification (
  CIdentification *     pValue)
{
    removeSubParameterFromAllList(m_pIdentification);
    delete m_pIdentification;
    m_pIdentification = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::addAntennaProperties (
  CAntennaProperties *     pValue)
{
    m_listAntennaProperties.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::addAntennaConfiguration (
  CAntennaConfiguration *     pValue)
{
    m_listAntennaConfiguration.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setReaderEventNotificationSpec (
  CReaderEventNotificationSpec *     pValue)
{
    removeSubParameterFromAllList(m_pReaderEventNotificationSpec);
    delete m_pReaderEventNotificationSpec;
    m_pReaderEventNotificationSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setROReportSpec (
  CROReportSpec *     pValue)
{
    removeSubParameterFromAllList(m_pROReportSpec);
    delete m_pROReportSpec;
    m_pROReportSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setAccessReportSpec (
  CAccessReportSpec *     pValue)
{
    removeSubParameterFromAllList(m_pAccessReportSpec);
    delete m_pAccessReportSpec;
    m_pAccessReportSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setLLRPConfigurationStateValue (
  CLLRPConfigurationStateValue *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPConfigurationStateValue);
    delete m_pLLRPConfigurationStateValue;
    m_pLLRPConfigurationStateValue = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setKeepaliveSpec (
  CKeepaliveSpec *     pValue)
{
    removeSubParameterFromAllList(m_pKeepaliveSpec);
    delete m_pKeepaliveSpec;
    m_pKeepaliveSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::addGPIPortCurrentState (
  CGPIPortCurrentState *     pValue)
{
    m_listGPIPortCurrentState.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::addGPOWriteData (
  CGPOWriteData *     pValue)
{
    m_listGPOWriteData.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::setEventsAndReports (
  CEventsAndReports *     pValue)
{
    removeSubParameterFromAllList(m_pEventsAndReports);
    delete m_pEventsAndReports;
    m_pEventsAndReports = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGET_READER_CONFIG_RESPONSE::addCustom (
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
CGET_READER_CONFIG_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
    pType = &CIdentification::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pIdentification, pType);
      
    pType = &CAntennaProperties::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAntennaProperties, pType);
      
    pType = &CAntennaConfiguration::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAntennaConfiguration, pType);
      
    pType = &CReaderEventNotificationSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pReaderEventNotificationSpec, pType);
      
    pType = &CROReportSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROReportSpec, pType);
      
    pType = &CAccessReportSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAccessReportSpec, pType);
      
    pType = &CLLRPConfigurationStateValue::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pLLRPConfigurationStateValue, pType);
      
    pType = &CKeepaliveSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pKeepaliveSpec, pType);
      
    pType = &CGPIPortCurrentState::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listGPIPortCurrentState, pType);
      
    pType = &CGPOWriteData::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listGPOWriteData, pType);
      
    pType = &CEventsAndReports::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pEventsAndReports, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Message SET_READER_CONFIG
**
*****************************************************************
*/
  

const CTypeDescriptor
CSET_READER_CONFIG::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "SET_READER_CONFIG",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    3,	// m_TypeNum
    &CSET_READER_CONFIG_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSET_READER_CONFIG::s_apFieldDescriptorTable[] =
{
  
    &s_fdResetToFactoryDefault,
    NULL
};



const CFieldDescriptor
CSET_READER_CONFIG::s_fdResetToFactoryDefault =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ResetToFactoryDefault",	// m_pName
    NULL	// m_pEnumTable
};
CSET_READER_CONFIG::CSET_READER_CONFIG (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ResetToFactoryDefault = 0;
    m_pReaderEventNotificationSpec = NULL;
    m_pROReportSpec = NULL;
    m_pAccessReportSpec = NULL;
    m_pKeepaliveSpec = NULL;
    m_pEventsAndReports = NULL;
}

CSET_READER_CONFIG::~CSET_READER_CONFIG (void)
{
}


CElement *
CSET_READER_CONFIG::s_construct (void)
{
    return (CElement *) new CSET_READER_CONFIG();
}


void
CSET_READER_CONFIG::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSET_READER_CONFIG * pTarget = (CSET_READER_CONFIG *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ResetToFactoryDefault = pDecoderStream->get_u1(&s_fdResetToFactoryDefault);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdResetToFactoryDefault);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CSET_READER_CONFIG::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSET_READER_CONFIG::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ReaderEventNotificationSpec
    pType = &CReaderEventNotificationSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pReaderEventNotificationSpec = (CReaderEventNotificationSpec *)*Cur++;
    }
    

    // 0-N of AntennaProperties
    pType = &CAntennaProperties::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listAntennaProperties.push_back((CAntennaProperties *)*Cur);
        Cur++;
    }
    

    // 0-N of AntennaConfiguration
    pType = &CAntennaConfiguration::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listAntennaConfiguration.push_back((CAntennaConfiguration *)*Cur);
        Cur++;
    }
    

    // 0-1 of ROReportSpec
    pType = &CROReportSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROReportSpec = (CROReportSpec *)*Cur++;
    }
    

    // 0-1 of AccessReportSpec
    pType = &CAccessReportSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAccessReportSpec = (CAccessReportSpec *)*Cur++;
    }
    

    // 0-1 of KeepaliveSpec
    pType = &CKeepaliveSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pKeepaliveSpec = (CKeepaliveSpec *)*Cur++;
    }
    

    // 0-N of GPOWriteData
    pType = &CGPOWriteData::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listGPOWriteData.push_back((CGPOWriteData *)*Cur);
        Cur++;
    }
    

    // 0-N of GPIPortCurrentState
    pType = &CGPIPortCurrentState::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listGPIPortCurrentState.push_back((CGPIPortCurrentState *)*Cur);
        Cur++;
    }
    

    // 0-1 of EventsAndReports
    pType = &CEventsAndReports::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pEventsAndReports = (CEventsAndReports *)*Cur++;
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
CSET_READER_CONFIG::setReaderEventNotificationSpec (
  CReaderEventNotificationSpec *     pValue)
{
    removeSubParameterFromAllList(m_pReaderEventNotificationSpec);
    delete m_pReaderEventNotificationSpec;
    m_pReaderEventNotificationSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::addAntennaProperties (
  CAntennaProperties *     pValue)
{
    m_listAntennaProperties.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::addAntennaConfiguration (
  CAntennaConfiguration *     pValue)
{
    m_listAntennaConfiguration.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::setROReportSpec (
  CROReportSpec *     pValue)
{
    removeSubParameterFromAllList(m_pROReportSpec);
    delete m_pROReportSpec;
    m_pROReportSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::setAccessReportSpec (
  CAccessReportSpec *     pValue)
{
    removeSubParameterFromAllList(m_pAccessReportSpec);
    delete m_pAccessReportSpec;
    m_pAccessReportSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::setKeepaliveSpec (
  CKeepaliveSpec *     pValue)
{
    removeSubParameterFromAllList(m_pKeepaliveSpec);
    delete m_pKeepaliveSpec;
    m_pKeepaliveSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::addGPOWriteData (
  CGPOWriteData *     pValue)
{
    m_listGPOWriteData.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::addGPIPortCurrentState (
  CGPIPortCurrentState *     pValue)
{
    m_listGPIPortCurrentState.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::setEventsAndReports (
  CEventsAndReports *     pValue)
{
    removeSubParameterFromAllList(m_pEventsAndReports);
    delete m_pEventsAndReports;
    m_pEventsAndReports = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CSET_READER_CONFIG::addCustom (
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
CSET_READER_CONFIG::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_ResetToFactoryDefault, &s_fdResetToFactoryDefault);

    pEncoderStream->put_reserved(7);

    pType = &CReaderEventNotificationSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pReaderEventNotificationSpec, pType);
      
    pType = &CAntennaProperties::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAntennaProperties, pType);
      
    pType = &CAntennaConfiguration::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAntennaConfiguration, pType);
      
    pType = &CROReportSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROReportSpec, pType);
      
    pType = &CAccessReportSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAccessReportSpec, pType);
      
    pType = &CKeepaliveSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pKeepaliveSpec, pType);
      
    pType = &CGPOWriteData::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listGPOWriteData, pType);
      
    pType = &CGPIPortCurrentState::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listGPIPortCurrentState, pType);
      
    pType = &CEventsAndReports::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pEventsAndReports, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Message SET_READER_CONFIG_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CSET_READER_CONFIG_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "SET_READER_CONFIG_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    13,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSET_READER_CONFIG_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CSET_READER_CONFIG_RESPONSE::CSET_READER_CONFIG_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CSET_READER_CONFIG_RESPONSE::~CSET_READER_CONFIG_RESPONSE (void)
{
}


CElement *
CSET_READER_CONFIG_RESPONSE::s_construct (void)
{
    return (CElement *) new CSET_READER_CONFIG_RESPONSE();
}


void
CSET_READER_CONFIG_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSET_READER_CONFIG_RESPONSE * pTarget = (CSET_READER_CONFIG_RESPONSE *) pTargetElement;

  
}


void
CSET_READER_CONFIG_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSET_READER_CONFIG_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CSET_READER_CONFIG_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CSET_READER_CONFIG_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message CLOSE_CONNECTION
**
*****************************************************************
*/
  

const CTypeDescriptor
CCLOSE_CONNECTION::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "CLOSE_CONNECTION",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    14,	// m_TypeNum
    &CCLOSE_CONNECTION_RESPONSE::s_typeDescriptor,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CCLOSE_CONNECTION::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CCLOSE_CONNECTION::CCLOSE_CONNECTION (void)
{
    m_pType = &s_typeDescriptor;
  
}

CCLOSE_CONNECTION::~CCLOSE_CONNECTION (void)
{
}


CElement *
CCLOSE_CONNECTION::s_construct (void)
{
    return (CElement *) new CCLOSE_CONNECTION();
}


void
CCLOSE_CONNECTION::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CCLOSE_CONNECTION * pTarget = (CCLOSE_CONNECTION *) pTargetElement;

  
}


void
CCLOSE_CONNECTION::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CCLOSE_CONNECTION::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CCLOSE_CONNECTION::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message CLOSE_CONNECTION_RESPONSE
**
*****************************************************************
*/
  

const CTypeDescriptor
CCLOSE_CONNECTION_RESPONSE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "CLOSE_CONNECTION_RESPONSE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    4,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CCLOSE_CONNECTION_RESPONSE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CCLOSE_CONNECTION_RESPONSE::CCLOSE_CONNECTION_RESPONSE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CCLOSE_CONNECTION_RESPONSE::~CCLOSE_CONNECTION_RESPONSE (void)
{
}


CElement *
CCLOSE_CONNECTION_RESPONSE::s_construct (void)
{
    return (CElement *) new CCLOSE_CONNECTION_RESPONSE();
}


void
CCLOSE_CONNECTION_RESPONSE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CCLOSE_CONNECTION_RESPONSE * pTarget = (CCLOSE_CONNECTION_RESPONSE *) pTargetElement;

  
}


void
CCLOSE_CONNECTION_RESPONSE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CCLOSE_CONNECTION_RESPONSE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CCLOSE_CONNECTION_RESPONSE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CCLOSE_CONNECTION_RESPONSE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Message GET_REPORT
**
*****************************************************************
*/
  

const CTypeDescriptor
CGET_REPORT::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "GET_REPORT",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    60,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGET_REPORT::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CGET_REPORT::CGET_REPORT (void)
{
    m_pType = &s_typeDescriptor;
  
}

CGET_REPORT::~CGET_REPORT (void)
{
}


CElement *
CGET_REPORT::s_construct (void)
{
    return (CElement *) new CGET_REPORT();
}


void
CGET_REPORT::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGET_REPORT * pTarget = (CGET_REPORT *) pTargetElement;

  
}


void
CGET_REPORT::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGET_REPORT::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGET_REPORT::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message RO_ACCESS_REPORT
**
*****************************************************************
*/
  

const CTypeDescriptor
CRO_ACCESS_REPORT::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "RO_ACCESS_REPORT",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    61,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRO_ACCESS_REPORT::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CRO_ACCESS_REPORT::CRO_ACCESS_REPORT (void)
{
    m_pType = &s_typeDescriptor;
  
}

CRO_ACCESS_REPORT::~CRO_ACCESS_REPORT (void)
{
}


CElement *
CRO_ACCESS_REPORT::s_construct (void)
{
    return (CElement *) new CRO_ACCESS_REPORT();
}


void
CRO_ACCESS_REPORT::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRO_ACCESS_REPORT * pTarget = (CRO_ACCESS_REPORT *) pTargetElement;

  
}


void
CRO_ACCESS_REPORT::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRO_ACCESS_REPORT::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of TagReportData
    pType = &CTagReportData::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listTagReportData.push_back((CTagReportData *)*Cur);
        Cur++;
    }
    

    // 0-N of RFSurveyReportData
    pType = &CRFSurveyReportData::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listRFSurveyReportData.push_back((CRFSurveyReportData *)*Cur);
        Cur++;
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
CRO_ACCESS_REPORT::addTagReportData (
  CTagReportData *     pValue)
{
    m_listTagReportData.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRO_ACCESS_REPORT::addRFSurveyReportData (
  CRFSurveyReportData *     pValue)
{
    m_listRFSurveyReportData.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRO_ACCESS_REPORT::addCustom (
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
CRO_ACCESS_REPORT::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CTagReportData::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listTagReportData, pType);
      
    pType = &CRFSurveyReportData::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listRFSurveyReportData, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Message KEEPALIVE
**
*****************************************************************
*/
  

const CTypeDescriptor
CKEEPALIVE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "KEEPALIVE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    62,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CKEEPALIVE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CKEEPALIVE::CKEEPALIVE (void)
{
    m_pType = &s_typeDescriptor;
  
}

CKEEPALIVE::~CKEEPALIVE (void)
{
}


CElement *
CKEEPALIVE::s_construct (void)
{
    return (CElement *) new CKEEPALIVE();
}


void
CKEEPALIVE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CKEEPALIVE * pTarget = (CKEEPALIVE *) pTargetElement;

  
}


void
CKEEPALIVE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CKEEPALIVE::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CKEEPALIVE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message KEEPALIVE_ACK
**
*****************************************************************
*/
  

const CTypeDescriptor
CKEEPALIVE_ACK::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "KEEPALIVE_ACK",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    72,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CKEEPALIVE_ACK::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CKEEPALIVE_ACK::CKEEPALIVE_ACK (void)
{
    m_pType = &s_typeDescriptor;
  
}

CKEEPALIVE_ACK::~CKEEPALIVE_ACK (void)
{
}


CElement *
CKEEPALIVE_ACK::s_construct (void)
{
    return (CElement *) new CKEEPALIVE_ACK();
}


void
CKEEPALIVE_ACK::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CKEEPALIVE_ACK * pTarget = (CKEEPALIVE_ACK *) pTargetElement;

  
}


void
CKEEPALIVE_ACK::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CKEEPALIVE_ACK::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CKEEPALIVE_ACK::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message READER_EVENT_NOTIFICATION
**
*****************************************************************
*/
  

const CTypeDescriptor
CREADER_EVENT_NOTIFICATION::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "READER_EVENT_NOTIFICATION",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    63,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CREADER_EVENT_NOTIFICATION::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CREADER_EVENT_NOTIFICATION::CREADER_EVENT_NOTIFICATION (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pReaderEventNotificationData = NULL;
}

CREADER_EVENT_NOTIFICATION::~CREADER_EVENT_NOTIFICATION (void)
{
}


CElement *
CREADER_EVENT_NOTIFICATION::s_construct (void)
{
    return (CElement *) new CREADER_EVENT_NOTIFICATION();
}


void
CREADER_EVENT_NOTIFICATION::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CREADER_EVENT_NOTIFICATION * pTarget = (CREADER_EVENT_NOTIFICATION *) pTargetElement;

  
}


void
CREADER_EVENT_NOTIFICATION::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CREADER_EVENT_NOTIFICATION::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of ReaderEventNotificationData
    pType = &CReaderEventNotificationData::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pReaderEventNotificationData = (CReaderEventNotificationData *)*Cur++;
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CREADER_EVENT_NOTIFICATION::setReaderEventNotificationData (
  CReaderEventNotificationData *     pValue)
{
    removeSubParameterFromAllList(m_pReaderEventNotificationData);
    delete m_pReaderEventNotificationData;
    m_pReaderEventNotificationData = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CREADER_EVENT_NOTIFICATION::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CReaderEventNotificationData::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pReaderEventNotificationData, pType);
      
}




/*
*****************************************************************
**
** Message ENABLE_EVENTS_AND_REPORTS
**
*****************************************************************
*/
  

const CTypeDescriptor
CENABLE_EVENTS_AND_REPORTS::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ENABLE_EVENTS_AND_REPORTS",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    64,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CENABLE_EVENTS_AND_REPORTS::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CENABLE_EVENTS_AND_REPORTS::CENABLE_EVENTS_AND_REPORTS (void)
{
    m_pType = &s_typeDescriptor;
  
}

CENABLE_EVENTS_AND_REPORTS::~CENABLE_EVENTS_AND_REPORTS (void)
{
}


CElement *
CENABLE_EVENTS_AND_REPORTS::s_construct (void)
{
    return (CElement *) new CENABLE_EVENTS_AND_REPORTS();
}


void
CENABLE_EVENTS_AND_REPORTS::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CENABLE_EVENTS_AND_REPORTS * pTarget = (CENABLE_EVENTS_AND_REPORTS *) pTargetElement;

  
}


void
CENABLE_EVENTS_AND_REPORTS::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CENABLE_EVENTS_AND_REPORTS::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CENABLE_EVENTS_AND_REPORTS::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Message ERROR_MESSAGE
**
*****************************************************************
*/
  

const CTypeDescriptor
CERROR_MESSAGE::s_typeDescriptor =
{
    TRUE,		// m_bIsMessage
    "ERROR_MESSAGE",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    100,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CERROR_MESSAGE::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CERROR_MESSAGE::CERROR_MESSAGE (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pLLRPStatus = NULL;
}

CERROR_MESSAGE::~CERROR_MESSAGE (void)
{
}


CElement *
CERROR_MESSAGE::s_construct (void)
{
    return (CElement *) new CERROR_MESSAGE();
}


void
CERROR_MESSAGE::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CERROR_MESSAGE * pTarget = (CERROR_MESSAGE *) pTargetElement;

  
}


void
CERROR_MESSAGE::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CERROR_MESSAGE::assimilateSubParameters (
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
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CERROR_MESSAGE::setLLRPStatus (
  CLLRPStatus *     pValue)
{
    removeSubParameterFromAllList(m_pLLRPStatus);
    delete m_pLLRPStatus;
    m_pLLRPStatus = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CERROR_MESSAGE::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CLLRPStatus::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pLLRPStatus, pType);
      
}




/*
*****************************************************************
**
** Parameter UTCTimestamp
**
*****************************************************************
*/
  

const CTypeDescriptor
CUTCTimestamp::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "UTCTimestamp",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    128,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CUTCTimestamp::s_apFieldDescriptorTable[] =
{
  
    &s_fdMicroseconds,
    NULL
};



const CFieldDescriptor
CUTCTimestamp::s_fdMicroseconds =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_DATETIME,	// m_eFieldFormat
    "Microseconds",	// m_pName
    NULL	// m_pEnumTable
};
CUTCTimestamp::CUTCTimestamp (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Microseconds = 0;
}

CUTCTimestamp::~CUTCTimestamp (void)
{
}


CElement *
CUTCTimestamp::s_construct (void)
{
    return (CElement *) new CUTCTimestamp();
}


void
CUTCTimestamp::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CUTCTimestamp * pTarget = (CUTCTimestamp *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Microseconds = pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    
}


void
CUTCTimestamp::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CUTCTimestamp::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CUTCTimestamp::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_Microseconds, &s_fdMicroseconds);

}




/*
*****************************************************************
**
** Parameter Uptime
**
*****************************************************************
*/
  

const CTypeDescriptor
CUptime::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "Uptime",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    129,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CUptime::s_apFieldDescriptorTable[] =
{
  
    &s_fdMicroseconds,
    NULL
};



const CFieldDescriptor
CUptime::s_fdMicroseconds =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Microseconds",	// m_pName
    NULL	// m_pEnumTable
};
CUptime::CUptime (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Microseconds = 0;
}

CUptime::~CUptime (void)
{
}


CElement *
CUptime::s_construct (void)
{
    return (CElement *) new CUptime();
}


void
CUptime::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CUptime * pTarget = (CUptime *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Microseconds = pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    
}


void
CUptime::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CUptime::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CUptime::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_Microseconds, &s_fdMicroseconds);

}




/*
*****************************************************************
**
** Parameter Custom
**
*****************************************************************
*/
  

const CTypeDescriptor
CCustom::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "Custom",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    1023,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CCustom::s_apFieldDescriptorTable[] =
{
  
    &s_fdVendorIdentifier,
    &s_fdParameterSubtype,
    &s_fdData,
    NULL
};



const CFieldDescriptor
CCustom::s_fdVendorIdentifier =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "VendorIdentifier",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CCustom::s_fdParameterSubtype =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ParameterSubtype",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CCustom::s_fdData =
{
    CFieldDescriptor::FT_BYTESTOEND,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "Data",	// m_pName
    NULL	// m_pEnumTable
};
CCustom::CCustom (void)
{
    m_pType = &s_typeDescriptor;
  
    m_VendorIdentifier = 0;
    m_ParameterSubtype = 0;
}

CCustom::~CCustom (void)
{
}


CElement *
CCustom::s_construct (void)
{
    return (CElement *) new CCustom();
}


void
CCustom::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CCustom * pTarget = (CCustom *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_VendorIdentifier = pDecoderStream->get_u32(&s_fdVendorIdentifier);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdVendorIdentifier);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ParameterSubtype = pDecoderStream->get_u32(&s_fdParameterSubtype);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdParameterSubtype);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Data = pDecoderStream->get_bytesToEnd(&s_fdData);
    }
    else
    {
        pDecoderStream->get_bytesToEnd(&s_fdData);
    }
    
}


void
CCustom::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CCustom::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CCustom::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_VendorIdentifier, &s_fdVendorIdentifier);

    pEncoderStream->put_u32(m_ParameterSubtype, &s_fdParameterSubtype);

    pEncoderStream->put_bytesToEnd(m_Data, &s_fdData);

}




/*
*****************************************************************
**
** Parameter GeneralDeviceCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CGeneralDeviceCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "GeneralDeviceCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    137,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGeneralDeviceCapabilities::s_apFieldDescriptorTable[] =
{
  
    &s_fdMaxNumberOfAntennaSupported,
    &s_fdCanSetAntennaProperties,
    &s_fdHasUTCClockCapability,
    &s_fdDeviceManufacturerName,
    &s_fdModelName,
    &s_fdReaderFirmwareVersion,
    NULL
};



const CFieldDescriptor
CGeneralDeviceCapabilities::s_fdMaxNumberOfAntennaSupported =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumberOfAntennaSupported",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGeneralDeviceCapabilities::s_fdCanSetAntennaProperties =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CanSetAntennaProperties",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGeneralDeviceCapabilities::s_fdHasUTCClockCapability =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "HasUTCClockCapability",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGeneralDeviceCapabilities::s_fdDeviceManufacturerName =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DeviceManufacturerName",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGeneralDeviceCapabilities::s_fdModelName =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ModelName",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGeneralDeviceCapabilities::s_fdReaderFirmwareVersion =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_UTF8,	// m_eFieldFormat
    "ReaderFirmwareVersion",	// m_pName
    NULL	// m_pEnumTable
};
CGeneralDeviceCapabilities::CGeneralDeviceCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
    m_MaxNumberOfAntennaSupported = 0;
    m_CanSetAntennaProperties = 0;
    m_HasUTCClockCapability = 0;
    m_DeviceManufacturerName = 0;
    m_ModelName = 0;
    m_pGPIOCapabilities = NULL;
}

CGeneralDeviceCapabilities::~CGeneralDeviceCapabilities (void)
{
}


CElement *
CGeneralDeviceCapabilities::s_construct (void)
{
    return (CElement *) new CGeneralDeviceCapabilities();
}


void
CGeneralDeviceCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGeneralDeviceCapabilities * pTarget = (CGeneralDeviceCapabilities *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_MaxNumberOfAntennaSupported = pDecoderStream->get_u16(&s_fdMaxNumberOfAntennaSupported);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdMaxNumberOfAntennaSupported);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_CanSetAntennaProperties = pDecoderStream->get_u1(&s_fdCanSetAntennaProperties);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdCanSetAntennaProperties);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_HasUTCClockCapability = pDecoderStream->get_u1(&s_fdHasUTCClockCapability);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdHasUTCClockCapability);
    }
    
    pDecoderStream->get_reserved(14);

    if(NULL != pTarget)
    {
        pTarget->m_DeviceManufacturerName = pDecoderStream->get_u32(&s_fdDeviceManufacturerName);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdDeviceManufacturerName);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ModelName = pDecoderStream->get_u32(&s_fdModelName);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdModelName);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ReaderFirmwareVersion = pDecoderStream->get_utf8v(&s_fdReaderFirmwareVersion);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdReaderFirmwareVersion);
    }
    
}


void
CGeneralDeviceCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGeneralDeviceCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1-N of ReceiveSensitivityTableEntry
    pType = &CReceiveSensitivityTableEntry::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listReceiveSensitivityTableEntry.push_back((CReceiveSensitivityTableEntry *)*Cur);
        Cur++;
    }
    

    // 0-N of PerAntennaReceiveSensitivityRange
    pType = &CPerAntennaReceiveSensitivityRange::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listPerAntennaReceiveSensitivityRange.push_back((CPerAntennaReceiveSensitivityRange *)*Cur);
        Cur++;
    }
    

    // 1 of GPIOCapabilities
    pType = &CGPIOCapabilities::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pGPIOCapabilities = (CGPIOCapabilities *)*Cur++;
    

    // 1-N of PerAntennaAirProtocol
    pType = &CPerAntennaAirProtocol::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listPerAntennaAirProtocol.push_back((CPerAntennaAirProtocol *)*Cur);
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
CGeneralDeviceCapabilities::addReceiveSensitivityTableEntry (
  CReceiveSensitivityTableEntry *     pValue)
{
    m_listReceiveSensitivityTableEntry.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGeneralDeviceCapabilities::addPerAntennaReceiveSensitivityRange (
  CPerAntennaReceiveSensitivityRange *     pValue)
{
    m_listPerAntennaReceiveSensitivityRange.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGeneralDeviceCapabilities::setGPIOCapabilities (
  CGPIOCapabilities *     pValue)
{
    removeSubParameterFromAllList(m_pGPIOCapabilities);
    delete m_pGPIOCapabilities;
    m_pGPIOCapabilities = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CGeneralDeviceCapabilities::addPerAntennaAirProtocol (
  CPerAntennaAirProtocol *     pValue)
{
    m_listPerAntennaAirProtocol.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CGeneralDeviceCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_MaxNumberOfAntennaSupported, &s_fdMaxNumberOfAntennaSupported);

    pEncoderStream->put_u1(m_CanSetAntennaProperties, &s_fdCanSetAntennaProperties);

    pEncoderStream->put_u1(m_HasUTCClockCapability, &s_fdHasUTCClockCapability);

    pEncoderStream->put_reserved(14);

    pEncoderStream->put_u32(m_DeviceManufacturerName, &s_fdDeviceManufacturerName);

    pEncoderStream->put_u32(m_ModelName, &s_fdModelName);

    pEncoderStream->put_utf8v(m_ReaderFirmwareVersion, &s_fdReaderFirmwareVersion);

    pType = &CReceiveSensitivityTableEntry::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listReceiveSensitivityTableEntry, pType);
      
    pType = &CPerAntennaReceiveSensitivityRange::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listPerAntennaReceiveSensitivityRange, pType);
      
    pType = &CGPIOCapabilities::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pGPIOCapabilities, pType);
      
    pType = &CPerAntennaAirProtocol::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listPerAntennaAirProtocol, pType);
      
}




/*
*****************************************************************
**
** Parameter ReceiveSensitivityTableEntry
**
*****************************************************************
*/
  

const CTypeDescriptor
CReceiveSensitivityTableEntry::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ReceiveSensitivityTableEntry",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    139,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CReceiveSensitivityTableEntry::s_apFieldDescriptorTable[] =
{
  
    &s_fdIndex,
    &s_fdReceiveSensitivityValue,
    NULL
};



const CFieldDescriptor
CReceiveSensitivityTableEntry::s_fdIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Index",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CReceiveSensitivityTableEntry::s_fdReceiveSensitivityValue =
{
    CFieldDescriptor::FT_S16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReceiveSensitivityValue",	// m_pName
    NULL	// m_pEnumTable
};
CReceiveSensitivityTableEntry::CReceiveSensitivityTableEntry (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Index = 0;
    m_ReceiveSensitivityValue = 0;
}

CReceiveSensitivityTableEntry::~CReceiveSensitivityTableEntry (void)
{
}


CElement *
CReceiveSensitivityTableEntry::s_construct (void)
{
    return (CElement *) new CReceiveSensitivityTableEntry();
}


void
CReceiveSensitivityTableEntry::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CReceiveSensitivityTableEntry * pTarget = (CReceiveSensitivityTableEntry *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Index = pDecoderStream->get_u16(&s_fdIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdIndex);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ReceiveSensitivityValue = pDecoderStream->get_s16(&s_fdReceiveSensitivityValue);
    }
    else
    {
        pDecoderStream->get_s16(&s_fdReceiveSensitivityValue);
    }
    
}


void
CReceiveSensitivityTableEntry::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CReceiveSensitivityTableEntry::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CReceiveSensitivityTableEntry::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_Index, &s_fdIndex);

    pEncoderStream->put_s16(m_ReceiveSensitivityValue, &s_fdReceiveSensitivityValue);

}




/*
*****************************************************************
**
** Parameter PerAntennaReceiveSensitivityRange
**
*****************************************************************
*/
  

const CTypeDescriptor
CPerAntennaReceiveSensitivityRange::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "PerAntennaReceiveSensitivityRange",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    149,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CPerAntennaReceiveSensitivityRange::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaID,
    &s_fdReceiveSensitivityIndexMin,
    &s_fdReceiveSensitivityIndexMax,
    NULL
};



const CFieldDescriptor
CPerAntennaReceiveSensitivityRange::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CPerAntennaReceiveSensitivityRange::s_fdReceiveSensitivityIndexMin =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReceiveSensitivityIndexMin",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CPerAntennaReceiveSensitivityRange::s_fdReceiveSensitivityIndexMax =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReceiveSensitivityIndexMax",	// m_pName
    NULL	// m_pEnumTable
};
CPerAntennaReceiveSensitivityRange::CPerAntennaReceiveSensitivityRange (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaID = 0;
    m_ReceiveSensitivityIndexMin = 0;
    m_ReceiveSensitivityIndexMax = 0;
}

CPerAntennaReceiveSensitivityRange::~CPerAntennaReceiveSensitivityRange (void)
{
}


CElement *
CPerAntennaReceiveSensitivityRange::s_construct (void)
{
    return (CElement *) new CPerAntennaReceiveSensitivityRange();
}


void
CPerAntennaReceiveSensitivityRange::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CPerAntennaReceiveSensitivityRange * pTarget = (CPerAntennaReceiveSensitivityRange *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ReceiveSensitivityIndexMin = pDecoderStream->get_u16(&s_fdReceiveSensitivityIndexMin);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdReceiveSensitivityIndexMin);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ReceiveSensitivityIndexMax = pDecoderStream->get_u16(&s_fdReceiveSensitivityIndexMax);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdReceiveSensitivityIndexMax);
    }
    
}


void
CPerAntennaReceiveSensitivityRange::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CPerAntennaReceiveSensitivityRange::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CPerAntennaReceiveSensitivityRange::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pEncoderStream->put_u16(m_ReceiveSensitivityIndexMin, &s_fdReceiveSensitivityIndexMin);

    pEncoderStream->put_u16(m_ReceiveSensitivityIndexMax, &s_fdReceiveSensitivityIndexMax);

}




/*
*****************************************************************
**
** Parameter PerAntennaAirProtocol
**
*****************************************************************
*/
  

const CTypeDescriptor
CPerAntennaAirProtocol::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "PerAntennaAirProtocol",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    140,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CPerAntennaAirProtocol::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaID,
    &s_fdProtocolID,
    NULL
};



const CFieldDescriptor
CPerAntennaAirProtocol::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CPerAntennaAirProtocol::s_fdProtocolID =
{
    CFieldDescriptor::FT_E8V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ProtocolID",	// m_pName
    g_estAirProtocols	// m_pEnumTable
};
CPerAntennaAirProtocol::CPerAntennaAirProtocol (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaID = 0;
}

CPerAntennaAirProtocol::~CPerAntennaAirProtocol (void)
{
}


CElement *
CPerAntennaAirProtocol::s_construct (void)
{
    return (CElement *) new CPerAntennaAirProtocol();
}


void
CPerAntennaAirProtocol::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CPerAntennaAirProtocol * pTarget = (CPerAntennaAirProtocol *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ProtocolID = pDecoderStream->get_e8v(&s_fdProtocolID);
    }
    else
    {
        pDecoderStream->get_e8v(&s_fdProtocolID);
    }
    
}


void
CPerAntennaAirProtocol::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CPerAntennaAirProtocol::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CPerAntennaAirProtocol::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pEncoderStream->put_e8v(m_ProtocolID, &s_fdProtocolID);
    
}




/*
*****************************************************************
**
** Parameter GPIOCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CGPIOCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "GPIOCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    141,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGPIOCapabilities::s_apFieldDescriptorTable[] =
{
  
    &s_fdNumGPIs,
    &s_fdNumGPOs,
    NULL
};



const CFieldDescriptor
CGPIOCapabilities::s_fdNumGPIs =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumGPIs",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPIOCapabilities::s_fdNumGPOs =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumGPOs",	// m_pName
    NULL	// m_pEnumTable
};
CGPIOCapabilities::CGPIOCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
    m_NumGPIs = 0;
    m_NumGPOs = 0;
}

CGPIOCapabilities::~CGPIOCapabilities (void)
{
}


CElement *
CGPIOCapabilities::s_construct (void)
{
    return (CElement *) new CGPIOCapabilities();
}


void
CGPIOCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGPIOCapabilities * pTarget = (CGPIOCapabilities *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_NumGPIs = pDecoderStream->get_u16(&s_fdNumGPIs);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumGPIs);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_NumGPOs = pDecoderStream->get_u16(&s_fdNumGPOs);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumGPOs);
    }
    
}


void
CGPIOCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGPIOCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGPIOCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_NumGPIs, &s_fdNumGPIs);

    pEncoderStream->put_u16(m_NumGPOs, &s_fdNumGPOs);

}




/*
*****************************************************************
**
** Parameter LLRPCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CLLRPCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "LLRPCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    142,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CLLRPCapabilities::s_apFieldDescriptorTable[] =
{
  
    &s_fdCanDoRFSurvey,
    &s_fdCanReportBufferFillWarning,
    &s_fdSupportsClientRequestOpSpec,
    &s_fdCanDoTagInventoryStateAwareSingulation,
    &s_fdSupportsEventAndReportHolding,
    &s_fdMaxNumPriorityLevelsSupported,
    &s_fdClientRequestOpSpecTimeout,
    &s_fdMaxNumROSpecs,
    &s_fdMaxNumSpecsPerROSpec,
    &s_fdMaxNumInventoryParameterSpecsPerAISpec,
    &s_fdMaxNumAccessSpecs,
    &s_fdMaxNumOpSpecsPerAccessSpec,
    NULL
};



const CFieldDescriptor
CLLRPCapabilities::s_fdCanDoRFSurvey =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CanDoRFSurvey",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdCanReportBufferFillWarning =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CanReportBufferFillWarning",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdSupportsClientRequestOpSpec =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SupportsClientRequestOpSpec",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdCanDoTagInventoryStateAwareSingulation =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CanDoTagInventoryStateAwareSingulation",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdSupportsEventAndReportHolding =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SupportsEventAndReportHolding",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdMaxNumPriorityLevelsSupported =
{
    CFieldDescriptor::FT_U8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumPriorityLevelsSupported",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdClientRequestOpSpecTimeout =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ClientRequestOpSpecTimeout",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdMaxNumROSpecs =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumROSpecs",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdMaxNumSpecsPerROSpec =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumSpecsPerROSpec",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdMaxNumInventoryParameterSpecsPerAISpec =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumInventoryParameterSpecsPerAISpec",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdMaxNumAccessSpecs =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumAccessSpecs",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CLLRPCapabilities::s_fdMaxNumOpSpecsPerAccessSpec =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumOpSpecsPerAccessSpec",	// m_pName
    NULL	// m_pEnumTable
};
CLLRPCapabilities::CLLRPCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
    m_CanDoRFSurvey = 0;
    m_CanReportBufferFillWarning = 0;
    m_SupportsClientRequestOpSpec = 0;
    m_CanDoTagInventoryStateAwareSingulation = 0;
    m_SupportsEventAndReportHolding = 0;
    m_MaxNumPriorityLevelsSupported = 0;
    m_ClientRequestOpSpecTimeout = 0;
    m_MaxNumROSpecs = 0;
    m_MaxNumSpecsPerROSpec = 0;
    m_MaxNumInventoryParameterSpecsPerAISpec = 0;
    m_MaxNumAccessSpecs = 0;
    m_MaxNumOpSpecsPerAccessSpec = 0;
}

CLLRPCapabilities::~CLLRPCapabilities (void)
{
}


CElement *
CLLRPCapabilities::s_construct (void)
{
    return (CElement *) new CLLRPCapabilities();
}


void
CLLRPCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CLLRPCapabilities * pTarget = (CLLRPCapabilities *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_CanDoRFSurvey = pDecoderStream->get_u1(&s_fdCanDoRFSurvey);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdCanDoRFSurvey);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_CanReportBufferFillWarning = pDecoderStream->get_u1(&s_fdCanReportBufferFillWarning);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdCanReportBufferFillWarning);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_SupportsClientRequestOpSpec = pDecoderStream->get_u1(&s_fdSupportsClientRequestOpSpec);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdSupportsClientRequestOpSpec);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_CanDoTagInventoryStateAwareSingulation = pDecoderStream->get_u1(&s_fdCanDoTagInventoryStateAwareSingulation);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdCanDoTagInventoryStateAwareSingulation);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_SupportsEventAndReportHolding = pDecoderStream->get_u1(&s_fdSupportsEventAndReportHolding);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdSupportsEventAndReportHolding);
    }
    
    pDecoderStream->get_reserved(3);

    if(NULL != pTarget)
    {
        pTarget->m_MaxNumPriorityLevelsSupported = pDecoderStream->get_u8(&s_fdMaxNumPriorityLevelsSupported);
    }
    else
    {
        pDecoderStream->get_u8(&s_fdMaxNumPriorityLevelsSupported);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ClientRequestOpSpecTimeout = pDecoderStream->get_u16(&s_fdClientRequestOpSpecTimeout);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdClientRequestOpSpecTimeout);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MaxNumROSpecs = pDecoderStream->get_u32(&s_fdMaxNumROSpecs);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMaxNumROSpecs);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MaxNumSpecsPerROSpec = pDecoderStream->get_u32(&s_fdMaxNumSpecsPerROSpec);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMaxNumSpecsPerROSpec);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MaxNumInventoryParameterSpecsPerAISpec = pDecoderStream->get_u32(&s_fdMaxNumInventoryParameterSpecsPerAISpec);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMaxNumInventoryParameterSpecsPerAISpec);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MaxNumAccessSpecs = pDecoderStream->get_u32(&s_fdMaxNumAccessSpecs);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMaxNumAccessSpecs);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MaxNumOpSpecsPerAccessSpec = pDecoderStream->get_u32(&s_fdMaxNumOpSpecsPerAccessSpec);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMaxNumOpSpecsPerAccessSpec);
    }
    
}


void
CLLRPCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CLLRPCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CLLRPCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_CanDoRFSurvey, &s_fdCanDoRFSurvey);

    pEncoderStream->put_u1(m_CanReportBufferFillWarning, &s_fdCanReportBufferFillWarning);

    pEncoderStream->put_u1(m_SupportsClientRequestOpSpec, &s_fdSupportsClientRequestOpSpec);

    pEncoderStream->put_u1(m_CanDoTagInventoryStateAwareSingulation, &s_fdCanDoTagInventoryStateAwareSingulation);

    pEncoderStream->put_u1(m_SupportsEventAndReportHolding, &s_fdSupportsEventAndReportHolding);

    pEncoderStream->put_reserved(3);

    pEncoderStream->put_u8(m_MaxNumPriorityLevelsSupported, &s_fdMaxNumPriorityLevelsSupported);

    pEncoderStream->put_u16(m_ClientRequestOpSpecTimeout, &s_fdClientRequestOpSpecTimeout);

    pEncoderStream->put_u32(m_MaxNumROSpecs, &s_fdMaxNumROSpecs);

    pEncoderStream->put_u32(m_MaxNumSpecsPerROSpec, &s_fdMaxNumSpecsPerROSpec);

    pEncoderStream->put_u32(m_MaxNumInventoryParameterSpecsPerAISpec, &s_fdMaxNumInventoryParameterSpecsPerAISpec);

    pEncoderStream->put_u32(m_MaxNumAccessSpecs, &s_fdMaxNumAccessSpecs);

    pEncoderStream->put_u32(m_MaxNumOpSpecsPerAccessSpec, &s_fdMaxNumOpSpecsPerAccessSpec);

}




/*
*****************************************************************
**
** Parameter RegulatoryCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CRegulatoryCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RegulatoryCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    143,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRegulatoryCapabilities::s_apFieldDescriptorTable[] =
{
  
    &s_fdCountryCode,
    &s_fdCommunicationsStandard,
    NULL
};



const CFieldDescriptor
CRegulatoryCapabilities::s_fdCountryCode =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CountryCode",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRegulatoryCapabilities::s_fdCommunicationsStandard =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CommunicationsStandard",	// m_pName
    g_estCommunicationsStandard	// m_pEnumTable
};
CRegulatoryCapabilities::CRegulatoryCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
    m_CountryCode = 0;
    m_eCommunicationsStandard = (ECommunicationsStandard) 0;
    m_pUHFBandCapabilities = NULL;
}

CRegulatoryCapabilities::~CRegulatoryCapabilities (void)
{
}


CElement *
CRegulatoryCapabilities::s_construct (void)
{
    return (CElement *) new CRegulatoryCapabilities();
}


void
CRegulatoryCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRegulatoryCapabilities * pTarget = (CRegulatoryCapabilities *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_CountryCode = pDecoderStream->get_u16(&s_fdCountryCode);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdCountryCode);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eCommunicationsStandard = (ECommunicationsStandard) pDecoderStream->get_e16(&s_fdCommunicationsStandard);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdCommunicationsStandard);
    }

}


void
CRegulatoryCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRegulatoryCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of UHFBandCapabilities
    pType = &CUHFBandCapabilities::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pUHFBandCapabilities = (CUHFBandCapabilities *)*Cur++;
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
CRegulatoryCapabilities::setUHFBandCapabilities (
  CUHFBandCapabilities *     pValue)
{
    removeSubParameterFromAllList(m_pUHFBandCapabilities);
    delete m_pUHFBandCapabilities;
    m_pUHFBandCapabilities = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRegulatoryCapabilities::addCustom (
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
CRegulatoryCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_CountryCode, &s_fdCountryCode);

    pEncoderStream->put_e16((int)m_eCommunicationsStandard, &s_fdCommunicationsStandard);

    pType = &CUHFBandCapabilities::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pUHFBandCapabilities, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter UHFBandCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CUHFBandCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "UHFBandCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    144,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CUHFBandCapabilities::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CUHFBandCapabilities::CUHFBandCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pFrequencyInformation = NULL;
}

CUHFBandCapabilities::~CUHFBandCapabilities (void)
{
}


CElement *
CUHFBandCapabilities::s_construct (void)
{
    return (CElement *) new CUHFBandCapabilities();
}


void
CUHFBandCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CUHFBandCapabilities * pTarget = (CUHFBandCapabilities *) pTargetElement;

  
}


void
CUHFBandCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CUHFBandCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1-N of TransmitPowerLevelTableEntry
    pType = &CTransmitPowerLevelTableEntry::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listTransmitPowerLevelTableEntry.push_back((CTransmitPowerLevelTableEntry *)*Cur);
        Cur++;
    }
    

    // 1 of FrequencyInformation
    pType = &CFrequencyInformation::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pFrequencyInformation = (CFrequencyInformation *)*Cur++;
    

    // 1-N of choice AirProtocolUHFRFModeTable
    pType = NULL;
  
    if(Cur == End || !CAirProtocolUHFRFModeTable::isMember(*Cur))
    {
        goto missing;
    }
    while(Cur != End && CAirProtocolUHFRFModeTable::isMember(*Cur))
    {
        m_listAirProtocolUHFRFModeTable.push_back(*Cur);
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
CUHFBandCapabilities::addTransmitPowerLevelTableEntry (
  CTransmitPowerLevelTableEntry *     pValue)
{
    m_listTransmitPowerLevelTableEntry.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CUHFBandCapabilities::setFrequencyInformation (
  CFrequencyInformation *     pValue)
{
    removeSubParameterFromAllList(m_pFrequencyInformation);
    delete m_pFrequencyInformation;
    m_pFrequencyInformation = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CUHFBandCapabilities::addAirProtocolUHFRFModeTable (
  CParameter *                  pValue)
{
    if(!CAirProtocolUHFRFModeTable::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listAirProtocolUHFRFModeTable.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CUHFBandCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CTransmitPowerLevelTableEntry::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listTransmitPowerLevelTableEntry, pType);
      
    pType = &CFrequencyInformation::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pFrequencyInformation, pType);
      
    pType = NULL;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listAirProtocolUHFRFModeTable, pType);
      
}




/*
*****************************************************************
**
** Parameter TransmitPowerLevelTableEntry
**
*****************************************************************
*/
  

const CTypeDescriptor
CTransmitPowerLevelTableEntry::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "TransmitPowerLevelTableEntry",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    145,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CTransmitPowerLevelTableEntry::s_apFieldDescriptorTable[] =
{
  
    &s_fdIndex,
    &s_fdTransmitPowerValue,
    NULL
};



const CFieldDescriptor
CTransmitPowerLevelTableEntry::s_fdIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Index",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTransmitPowerLevelTableEntry::s_fdTransmitPowerValue =
{
    CFieldDescriptor::FT_S16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TransmitPowerValue",	// m_pName
    NULL	// m_pEnumTable
};
CTransmitPowerLevelTableEntry::CTransmitPowerLevelTableEntry (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Index = 0;
    m_TransmitPowerValue = 0;
}

CTransmitPowerLevelTableEntry::~CTransmitPowerLevelTableEntry (void)
{
}


CElement *
CTransmitPowerLevelTableEntry::s_construct (void)
{
    return (CElement *) new CTransmitPowerLevelTableEntry();
}


void
CTransmitPowerLevelTableEntry::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CTransmitPowerLevelTableEntry * pTarget = (CTransmitPowerLevelTableEntry *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Index = pDecoderStream->get_u16(&s_fdIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdIndex);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_TransmitPowerValue = pDecoderStream->get_s16(&s_fdTransmitPowerValue);
    }
    else
    {
        pDecoderStream->get_s16(&s_fdTransmitPowerValue);
    }
    
}


void
CTransmitPowerLevelTableEntry::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CTransmitPowerLevelTableEntry::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CTransmitPowerLevelTableEntry::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_Index, &s_fdIndex);

    pEncoderStream->put_s16(m_TransmitPowerValue, &s_fdTransmitPowerValue);

}




/*
*****************************************************************
**
** Parameter FrequencyInformation
**
*****************************************************************
*/
  

const CTypeDescriptor
CFrequencyInformation::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FrequencyInformation",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    146,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFrequencyInformation::s_apFieldDescriptorTable[] =
{
  
    &s_fdHopping,
    NULL
};



const CFieldDescriptor
CFrequencyInformation::s_fdHopping =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Hopping",	// m_pName
    NULL	// m_pEnumTable
};
CFrequencyInformation::CFrequencyInformation (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Hopping = 0;
    m_pFixedFrequencyTable = NULL;
}

CFrequencyInformation::~CFrequencyInformation (void)
{
}


CElement *
CFrequencyInformation::s_construct (void)
{
    return (CElement *) new CFrequencyInformation();
}


void
CFrequencyInformation::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFrequencyInformation * pTarget = (CFrequencyInformation *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Hopping = pDecoderStream->get_u1(&s_fdHopping);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdHopping);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CFrequencyInformation::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFrequencyInformation::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of FrequencyHopTable
    pType = &CFrequencyHopTable::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listFrequencyHopTable.push_back((CFrequencyHopTable *)*Cur);
        Cur++;
    }
    

    // 0-1 of FixedFrequencyTable
    pType = &CFixedFrequencyTable::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pFixedFrequencyTable = (CFixedFrequencyTable *)*Cur++;
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
CFrequencyInformation::addFrequencyHopTable (
  CFrequencyHopTable *     pValue)
{
    m_listFrequencyHopTable.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CFrequencyInformation::setFixedFrequencyTable (
  CFixedFrequencyTable *     pValue)
{
    removeSubParameterFromAllList(m_pFixedFrequencyTable);
    delete m_pFixedFrequencyTable;
    m_pFixedFrequencyTable = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CFrequencyInformation::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_Hopping, &s_fdHopping);

    pEncoderStream->put_reserved(7);

    pType = &CFrequencyHopTable::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listFrequencyHopTable, pType);
      
    pType = &CFixedFrequencyTable::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pFixedFrequencyTable, pType);
      
}




/*
*****************************************************************
**
** Parameter FrequencyHopTable
**
*****************************************************************
*/
  

const CTypeDescriptor
CFrequencyHopTable::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FrequencyHopTable",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    147,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFrequencyHopTable::s_apFieldDescriptorTable[] =
{
  
    &s_fdHopTableID,
    &s_fdFrequency,
    NULL
};



const CFieldDescriptor
CFrequencyHopTable::s_fdHopTableID =
{
    CFieldDescriptor::FT_U8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "HopTableID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CFrequencyHopTable::s_fdFrequency =
{
    CFieldDescriptor::FT_U32V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Frequency",	// m_pName
    NULL	// m_pEnumTable
};
CFrequencyHopTable::CFrequencyHopTable (void)
{
    m_pType = &s_typeDescriptor;
  
    m_HopTableID = 0;
}

CFrequencyHopTable::~CFrequencyHopTable (void)
{
}


CElement *
CFrequencyHopTable::s_construct (void)
{
    return (CElement *) new CFrequencyHopTable();
}


void
CFrequencyHopTable::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFrequencyHopTable * pTarget = (CFrequencyHopTable *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_HopTableID = pDecoderStream->get_u8(&s_fdHopTableID);
    }
    else
    {
        pDecoderStream->get_u8(&s_fdHopTableID);
    }
    
    pDecoderStream->get_reserved(8);

    if(NULL != pTarget)
    {
        pTarget->m_Frequency = pDecoderStream->get_u32v(&s_fdFrequency);
    }
    else
    {
        pDecoderStream->get_u32v(&s_fdFrequency);
    }
    
}


void
CFrequencyHopTable::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFrequencyHopTable::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CFrequencyHopTable::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u8(m_HopTableID, &s_fdHopTableID);

    pEncoderStream->put_reserved(8);

    pEncoderStream->put_u32v(m_Frequency, &s_fdFrequency);

}




/*
*****************************************************************
**
** Parameter FixedFrequencyTable
**
*****************************************************************
*/
  

const CTypeDescriptor
CFixedFrequencyTable::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FixedFrequencyTable",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    148,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFixedFrequencyTable::s_apFieldDescriptorTable[] =
{
  
    &s_fdFrequency,
    NULL
};



const CFieldDescriptor
CFixedFrequencyTable::s_fdFrequency =
{
    CFieldDescriptor::FT_U32V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Frequency",	// m_pName
    NULL	// m_pEnumTable
};
CFixedFrequencyTable::CFixedFrequencyTable (void)
{
    m_pType = &s_typeDescriptor;
  
}

CFixedFrequencyTable::~CFixedFrequencyTable (void)
{
}


CElement *
CFixedFrequencyTable::s_construct (void)
{
    return (CElement *) new CFixedFrequencyTable();
}


void
CFixedFrequencyTable::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFixedFrequencyTable * pTarget = (CFixedFrequencyTable *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Frequency = pDecoderStream->get_u32v(&s_fdFrequency);
    }
    else
    {
        pDecoderStream->get_u32v(&s_fdFrequency);
    }
    
}


void
CFixedFrequencyTable::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFixedFrequencyTable::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CFixedFrequencyTable::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32v(m_Frequency, &s_fdFrequency);

}




/*
*****************************************************************
**
** Parameter ROSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CROSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    177,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    &s_fdPriority,
    &s_fdCurrentState,
    NULL
};



const CFieldDescriptor
CROSpec::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CROSpec::s_fdPriority =
{
    CFieldDescriptor::FT_U8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Priority",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CROSpec::s_fdCurrentState =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CurrentState",	// m_pName
    g_estROSpecState	// m_pEnumTable
};
CROSpec::CROSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
    m_Priority = 0;
    m_eCurrentState = (EROSpecState) 0;
    m_pROBoundarySpec = NULL;
    m_pROReportSpec = NULL;
}

CROSpec::~CROSpec (void)
{
}


CElement *
CROSpec::s_construct (void)
{
    return (CElement *) new CROSpec();
}


void
CROSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROSpec * pTarget = (CROSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Priority = pDecoderStream->get_u8(&s_fdPriority);
    }
    else
    {
        pDecoderStream->get_u8(&s_fdPriority);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eCurrentState = (EROSpecState) pDecoderStream->get_e8(&s_fdCurrentState);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdCurrentState);
    }

}


void
CROSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of ROBoundarySpec
    pType = &CROBoundarySpec::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pROBoundarySpec = (CROBoundarySpec *)*Cur++;
    

    // 1-N of choice SpecParameter
    pType = NULL;
  
    if(Cur == End || !CSpecParameter::isMember(*Cur))
    {
        goto missing;
    }
    while(Cur != End && CSpecParameter::isMember(*Cur))
    {
        m_listSpecParameter.push_back(*Cur);
        Cur++;
    }
    

    // 0-1 of ROReportSpec
    pType = &CROReportSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROReportSpec = (CROReportSpec *)*Cur++;
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
CROSpec::setROBoundarySpec (
  CROBoundarySpec *     pValue)
{
    removeSubParameterFromAllList(m_pROBoundarySpec);
    delete m_pROBoundarySpec;
    m_pROBoundarySpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CROSpec::addSpecParameter (
  CParameter *                  pValue)
{
    if(!CSpecParameter::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listSpecParameter.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CROSpec::setROReportSpec (
  CROReportSpec *     pValue)
{
    removeSubParameterFromAllList(m_pROReportSpec);
    delete m_pROReportSpec;
    m_pROReportSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CROSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

    pEncoderStream->put_u8(m_Priority, &s_fdPriority);

    pEncoderStream->put_e8((int)m_eCurrentState, &s_fdCurrentState);

    pType = &CROBoundarySpec::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pROBoundarySpec, pType);
      
    pType = NULL;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listSpecParameter, pType);
      
    pType = &CROReportSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROReportSpec, pType);
      
}




/*
*****************************************************************
**
** Parameter ROBoundarySpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CROBoundarySpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROBoundarySpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    178,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROBoundarySpec::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CROBoundarySpec::CROBoundarySpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pROSpecStartTrigger = NULL;
    m_pROSpecStopTrigger = NULL;
}

CROBoundarySpec::~CROBoundarySpec (void)
{
}


CElement *
CROBoundarySpec::s_construct (void)
{
    return (CElement *) new CROBoundarySpec();
}


void
CROBoundarySpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROBoundarySpec * pTarget = (CROBoundarySpec *) pTargetElement;

  
}


void
CROBoundarySpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROBoundarySpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of ROSpecStartTrigger
    pType = &CROSpecStartTrigger::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pROSpecStartTrigger = (CROSpecStartTrigger *)*Cur++;
    

    // 1 of ROSpecStopTrigger
    pType = &CROSpecStopTrigger::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pROSpecStopTrigger = (CROSpecStopTrigger *)*Cur++;
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CROBoundarySpec::setROSpecStartTrigger (
  CROSpecStartTrigger *     pValue)
{
    removeSubParameterFromAllList(m_pROSpecStartTrigger);
    delete m_pROSpecStartTrigger;
    m_pROSpecStartTrigger = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CROBoundarySpec::setROSpecStopTrigger (
  CROSpecStopTrigger *     pValue)
{
    removeSubParameterFromAllList(m_pROSpecStopTrigger);
    delete m_pROSpecStopTrigger;
    m_pROSpecStopTrigger = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CROBoundarySpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CROSpecStartTrigger::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pROSpecStartTrigger, pType);
      
    pType = &CROSpecStopTrigger::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pROSpecStopTrigger, pType);
      
}




/*
*****************************************************************
**
** Parameter ROSpecStartTrigger
**
*****************************************************************
*/
  

const CTypeDescriptor
CROSpecStartTrigger::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROSpecStartTrigger",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    179,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROSpecStartTrigger::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecStartTriggerType,
    NULL
};



const CFieldDescriptor
CROSpecStartTrigger::s_fdROSpecStartTriggerType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecStartTriggerType",	// m_pName
    g_estROSpecStartTriggerType	// m_pEnumTable
};
CROSpecStartTrigger::CROSpecStartTrigger (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eROSpecStartTriggerType = (EROSpecStartTriggerType) 0;
    m_pPeriodicTriggerValue = NULL;
    m_pGPITriggerValue = NULL;
}

CROSpecStartTrigger::~CROSpecStartTrigger (void)
{
}


CElement *
CROSpecStartTrigger::s_construct (void)
{
    return (CElement *) new CROSpecStartTrigger();
}


void
CROSpecStartTrigger::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROSpecStartTrigger * pTarget = (CROSpecStartTrigger *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eROSpecStartTriggerType = (EROSpecStartTriggerType) pDecoderStream->get_e8(&s_fdROSpecStartTriggerType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdROSpecStartTriggerType);
    }

}


void
CROSpecStartTrigger::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROSpecStartTrigger::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of PeriodicTriggerValue
    pType = &CPeriodicTriggerValue::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pPeriodicTriggerValue = (CPeriodicTriggerValue *)*Cur++;
    }
    

    // 0-1 of GPITriggerValue
    pType = &CGPITriggerValue::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pGPITriggerValue = (CGPITriggerValue *)*Cur++;
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
CROSpecStartTrigger::setPeriodicTriggerValue (
  CPeriodicTriggerValue *     pValue)
{
    removeSubParameterFromAllList(m_pPeriodicTriggerValue);
    delete m_pPeriodicTriggerValue;
    m_pPeriodicTriggerValue = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CROSpecStartTrigger::setGPITriggerValue (
  CGPITriggerValue *     pValue)
{
    removeSubParameterFromAllList(m_pGPITriggerValue);
    delete m_pGPITriggerValue;
    m_pGPITriggerValue = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CROSpecStartTrigger::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eROSpecStartTriggerType, &s_fdROSpecStartTriggerType);

    pType = &CPeriodicTriggerValue::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pPeriodicTriggerValue, pType);
      
    pType = &CGPITriggerValue::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pGPITriggerValue, pType);
      
}




/*
*****************************************************************
**
** Parameter PeriodicTriggerValue
**
*****************************************************************
*/
  

const CTypeDescriptor
CPeriodicTriggerValue::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "PeriodicTriggerValue",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    180,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CPeriodicTriggerValue::s_apFieldDescriptorTable[] =
{
  
    &s_fdOffset,
    &s_fdPeriod,
    NULL
};



const CFieldDescriptor
CPeriodicTriggerValue::s_fdOffset =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Offset",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CPeriodicTriggerValue::s_fdPeriod =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Period",	// m_pName
    NULL	// m_pEnumTable
};
CPeriodicTriggerValue::CPeriodicTriggerValue (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Offset = 0;
    m_Period = 0;
    m_pUTCTimestamp = NULL;
}

CPeriodicTriggerValue::~CPeriodicTriggerValue (void)
{
}


CElement *
CPeriodicTriggerValue::s_construct (void)
{
    return (CElement *) new CPeriodicTriggerValue();
}


void
CPeriodicTriggerValue::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CPeriodicTriggerValue * pTarget = (CPeriodicTriggerValue *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Offset = pDecoderStream->get_u32(&s_fdOffset);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdOffset);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Period = pDecoderStream->get_u32(&s_fdPeriod);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdPeriod);
    }
    
}


void
CPeriodicTriggerValue::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CPeriodicTriggerValue::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of UTCTimestamp
    pType = &CUTCTimestamp::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pUTCTimestamp = (CUTCTimestamp *)*Cur++;
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
CPeriodicTriggerValue::setUTCTimestamp (
  CUTCTimestamp *     pValue)
{
    removeSubParameterFromAllList(m_pUTCTimestamp);
    delete m_pUTCTimestamp;
    m_pUTCTimestamp = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CPeriodicTriggerValue::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_Offset, &s_fdOffset);

    pEncoderStream->put_u32(m_Period, &s_fdPeriod);

    pType = &CUTCTimestamp::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pUTCTimestamp, pType);
      
}




/*
*****************************************************************
**
** Parameter GPITriggerValue
**
*****************************************************************
*/
  

const CTypeDescriptor
CGPITriggerValue::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "GPITriggerValue",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    181,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGPITriggerValue::s_apFieldDescriptorTable[] =
{
  
    &s_fdGPIPortNum,
    &s_fdGPIEvent,
    &s_fdTimeout,
    NULL
};



const CFieldDescriptor
CGPITriggerValue::s_fdGPIPortNum =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIPortNum",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPITriggerValue::s_fdGPIEvent =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIEvent",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPITriggerValue::s_fdTimeout =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Timeout",	// m_pName
    NULL	// m_pEnumTable
};
CGPITriggerValue::CGPITriggerValue (void)
{
    m_pType = &s_typeDescriptor;
  
    m_GPIPortNum = 0;
    m_GPIEvent = 0;
    m_Timeout = 0;
}

CGPITriggerValue::~CGPITriggerValue (void)
{
}


CElement *
CGPITriggerValue::s_construct (void)
{
    return (CElement *) new CGPITriggerValue();
}


void
CGPITriggerValue::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGPITriggerValue * pTarget = (CGPITriggerValue *) pTargetElement;

  
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
        pTarget->m_GPIEvent = pDecoderStream->get_u1(&s_fdGPIEvent);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdGPIEvent);
    }
    
    pDecoderStream->get_reserved(7);

    if(NULL != pTarget)
    {
        pTarget->m_Timeout = pDecoderStream->get_u32(&s_fdTimeout);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdTimeout);
    }
    
}


void
CGPITriggerValue::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGPITriggerValue::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGPITriggerValue::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_GPIPortNum, &s_fdGPIPortNum);

    pEncoderStream->put_u1(m_GPIEvent, &s_fdGPIEvent);

    pEncoderStream->put_reserved(7);

    pEncoderStream->put_u32(m_Timeout, &s_fdTimeout);

}




/*
*****************************************************************
**
** Parameter ROSpecStopTrigger
**
*****************************************************************
*/
  

const CTypeDescriptor
CROSpecStopTrigger::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROSpecStopTrigger",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    182,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROSpecStopTrigger::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecStopTriggerType,
    &s_fdDurationTriggerValue,
    NULL
};



const CFieldDescriptor
CROSpecStopTrigger::s_fdROSpecStopTriggerType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecStopTriggerType",	// m_pName
    g_estROSpecStopTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CROSpecStopTrigger::s_fdDurationTriggerValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DurationTriggerValue",	// m_pName
    NULL	// m_pEnumTable
};
CROSpecStopTrigger::CROSpecStopTrigger (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eROSpecStopTriggerType = (EROSpecStopTriggerType) 0;
    m_DurationTriggerValue = 0;
    m_pGPITriggerValue = NULL;
}

CROSpecStopTrigger::~CROSpecStopTrigger (void)
{
}


CElement *
CROSpecStopTrigger::s_construct (void)
{
    return (CElement *) new CROSpecStopTrigger();
}


void
CROSpecStopTrigger::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROSpecStopTrigger * pTarget = (CROSpecStopTrigger *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eROSpecStopTriggerType = (EROSpecStopTriggerType) pDecoderStream->get_e8(&s_fdROSpecStopTriggerType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdROSpecStopTriggerType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_DurationTriggerValue = pDecoderStream->get_u32(&s_fdDurationTriggerValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdDurationTriggerValue);
    }
    
}


void
CROSpecStopTrigger::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROSpecStopTrigger::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of GPITriggerValue
    pType = &CGPITriggerValue::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pGPITriggerValue = (CGPITriggerValue *)*Cur++;
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
CROSpecStopTrigger::setGPITriggerValue (
  CGPITriggerValue *     pValue)
{
    removeSubParameterFromAllList(m_pGPITriggerValue);
    delete m_pGPITriggerValue;
    m_pGPITriggerValue = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CROSpecStopTrigger::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eROSpecStopTriggerType, &s_fdROSpecStopTriggerType);

    pEncoderStream->put_u32(m_DurationTriggerValue, &s_fdDurationTriggerValue);

    pType = &CGPITriggerValue::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pGPITriggerValue, pType);
      
}




/*
*****************************************************************
**
** Parameter AISpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CAISpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AISpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    183,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAISpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaIDs,
    NULL
};



const CFieldDescriptor
CAISpec::s_fdAntennaIDs =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaIDs",	// m_pName
    NULL	// m_pEnumTable
};
CAISpec::CAISpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pAISpecStopTrigger = NULL;
}

CAISpec::~CAISpec (void)
{
}


CElement *
CAISpec::s_construct (void)
{
    return (CElement *) new CAISpec();
}


void
CAISpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAISpec * pTarget = (CAISpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaIDs = pDecoderStream->get_u16v(&s_fdAntennaIDs);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdAntennaIDs);
    }
    
}


void
CAISpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAISpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of AISpecStopTrigger
    pType = &CAISpecStopTrigger::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pAISpecStopTrigger = (CAISpecStopTrigger *)*Cur++;
    

    // 1-N of InventoryParameterSpec
    pType = &CInventoryParameterSpec::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listInventoryParameterSpec.push_back((CInventoryParameterSpec *)*Cur);
        Cur++;
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
CAISpec::setAISpecStopTrigger (
  CAISpecStopTrigger *     pValue)
{
    removeSubParameterFromAllList(m_pAISpecStopTrigger);
    delete m_pAISpecStopTrigger;
    m_pAISpecStopTrigger = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAISpec::addInventoryParameterSpec (
  CInventoryParameterSpec *     pValue)
{
    m_listInventoryParameterSpec.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAISpec::addCustom (
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
CAISpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16v(m_AntennaIDs, &s_fdAntennaIDs);

    pType = &CAISpecStopTrigger::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pAISpecStopTrigger, pType);
      
    pType = &CInventoryParameterSpec::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listInventoryParameterSpec, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter AISpecStopTrigger
**
*****************************************************************
*/
  

const CTypeDescriptor
CAISpecStopTrigger::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AISpecStopTrigger",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    184,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAISpecStopTrigger::s_apFieldDescriptorTable[] =
{
  
    &s_fdAISpecStopTriggerType,
    &s_fdDurationTrigger,
    NULL
};



const CFieldDescriptor
CAISpecStopTrigger::s_fdAISpecStopTriggerType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AISpecStopTriggerType",	// m_pName
    g_estAISpecStopTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CAISpecStopTrigger::s_fdDurationTrigger =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DurationTrigger",	// m_pName
    NULL	// m_pEnumTable
};
CAISpecStopTrigger::CAISpecStopTrigger (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eAISpecStopTriggerType = (EAISpecStopTriggerType) 0;
    m_DurationTrigger = 0;
    m_pGPITriggerValue = NULL;
    m_pTagObservationTrigger = NULL;
}

CAISpecStopTrigger::~CAISpecStopTrigger (void)
{
}


CElement *
CAISpecStopTrigger::s_construct (void)
{
    return (CElement *) new CAISpecStopTrigger();
}


void
CAISpecStopTrigger::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAISpecStopTrigger * pTarget = (CAISpecStopTrigger *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eAISpecStopTriggerType = (EAISpecStopTriggerType) pDecoderStream->get_e8(&s_fdAISpecStopTriggerType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAISpecStopTriggerType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_DurationTrigger = pDecoderStream->get_u32(&s_fdDurationTrigger);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdDurationTrigger);
    }
    
}


void
CAISpecStopTrigger::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAISpecStopTrigger::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of GPITriggerValue
    pType = &CGPITriggerValue::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pGPITriggerValue = (CGPITriggerValue *)*Cur++;
    }
    

    // 0-1 of TagObservationTrigger
    pType = &CTagObservationTrigger::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pTagObservationTrigger = (CTagObservationTrigger *)*Cur++;
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
CAISpecStopTrigger::setGPITriggerValue (
  CGPITriggerValue *     pValue)
{
    removeSubParameterFromAllList(m_pGPITriggerValue);
    delete m_pGPITriggerValue;
    m_pGPITriggerValue = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAISpecStopTrigger::setTagObservationTrigger (
  CTagObservationTrigger *     pValue)
{
    removeSubParameterFromAllList(m_pTagObservationTrigger);
    delete m_pTagObservationTrigger;
    m_pTagObservationTrigger = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CAISpecStopTrigger::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eAISpecStopTriggerType, &s_fdAISpecStopTriggerType);

    pEncoderStream->put_u32(m_DurationTrigger, &s_fdDurationTrigger);

    pType = &CGPITriggerValue::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pGPITriggerValue, pType);
      
    pType = &CTagObservationTrigger::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pTagObservationTrigger, pType);
      
}




/*
*****************************************************************
**
** Parameter TagObservationTrigger
**
*****************************************************************
*/
  

const CTypeDescriptor
CTagObservationTrigger::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "TagObservationTrigger",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    185,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CTagObservationTrigger::s_apFieldDescriptorTable[] =
{
  
    &s_fdTriggerType,
    &s_fdNumberOfTags,
    &s_fdNumberOfAttempts,
    &s_fdT,
    &s_fdTimeout,
    NULL
};



const CFieldDescriptor
CTagObservationTrigger::s_fdTriggerType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TriggerType",	// m_pName
    g_estTagObservationTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CTagObservationTrigger::s_fdNumberOfTags =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumberOfTags",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagObservationTrigger::s_fdNumberOfAttempts =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumberOfAttempts",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagObservationTrigger::s_fdT =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "T",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagObservationTrigger::s_fdTimeout =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Timeout",	// m_pName
    NULL	// m_pEnumTable
};
CTagObservationTrigger::CTagObservationTrigger (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eTriggerType = (ETagObservationTriggerType) 0;
    m_NumberOfTags = 0;
    m_NumberOfAttempts = 0;
    m_T = 0;
    m_Timeout = 0;
}

CTagObservationTrigger::~CTagObservationTrigger (void)
{
}


CElement *
CTagObservationTrigger::s_construct (void)
{
    return (CElement *) new CTagObservationTrigger();
}


void
CTagObservationTrigger::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CTagObservationTrigger * pTarget = (CTagObservationTrigger *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eTriggerType = (ETagObservationTriggerType) pDecoderStream->get_e8(&s_fdTriggerType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdTriggerType);
    }

    pDecoderStream->get_reserved(8);

    if(NULL != pTarget)
    {
        pTarget->m_NumberOfTags = pDecoderStream->get_u16(&s_fdNumberOfTags);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumberOfTags);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_NumberOfAttempts = pDecoderStream->get_u16(&s_fdNumberOfAttempts);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumberOfAttempts);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_T = pDecoderStream->get_u16(&s_fdT);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdT);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Timeout = pDecoderStream->get_u32(&s_fdTimeout);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdTimeout);
    }
    
}


void
CTagObservationTrigger::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CTagObservationTrigger::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CTagObservationTrigger::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eTriggerType, &s_fdTriggerType);

    pEncoderStream->put_reserved(8);

    pEncoderStream->put_u16(m_NumberOfTags, &s_fdNumberOfTags);

    pEncoderStream->put_u16(m_NumberOfAttempts, &s_fdNumberOfAttempts);

    pEncoderStream->put_u16(m_T, &s_fdT);

    pEncoderStream->put_u32(m_Timeout, &s_fdTimeout);

}




/*
*****************************************************************
**
** Parameter InventoryParameterSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CInventoryParameterSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "InventoryParameterSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    186,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CInventoryParameterSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdInventoryParameterSpecID,
    &s_fdProtocolID,
    NULL
};



const CFieldDescriptor
CInventoryParameterSpec::s_fdInventoryParameterSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "InventoryParameterSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CInventoryParameterSpec::s_fdProtocolID =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ProtocolID",	// m_pName
    g_estAirProtocols	// m_pEnumTable
};
CInventoryParameterSpec::CInventoryParameterSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_InventoryParameterSpecID = 0;
    m_eProtocolID = (EAirProtocols) 0;
}

CInventoryParameterSpec::~CInventoryParameterSpec (void)
{
}


CElement *
CInventoryParameterSpec::s_construct (void)
{
    return (CElement *) new CInventoryParameterSpec();
}


void
CInventoryParameterSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CInventoryParameterSpec * pTarget = (CInventoryParameterSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_InventoryParameterSpecID = pDecoderStream->get_u16(&s_fdInventoryParameterSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdInventoryParameterSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eProtocolID = (EAirProtocols) pDecoderStream->get_e8(&s_fdProtocolID);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdProtocolID);
    }

}


void
CInventoryParameterSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CInventoryParameterSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of AntennaConfiguration
    pType = &CAntennaConfiguration::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listAntennaConfiguration.push_back((CAntennaConfiguration *)*Cur);
        Cur++;
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
CInventoryParameterSpec::addAntennaConfiguration (
  CAntennaConfiguration *     pValue)
{
    m_listAntennaConfiguration.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CInventoryParameterSpec::addCustom (
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
CInventoryParameterSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_InventoryParameterSpecID, &s_fdInventoryParameterSpecID);

    pEncoderStream->put_e8((int)m_eProtocolID, &s_fdProtocolID);

    pType = &CAntennaConfiguration::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAntennaConfiguration, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter RFSurveySpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CRFSurveySpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RFSurveySpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    187,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRFSurveySpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaID,
    &s_fdStartFrequency,
    &s_fdEndFrequency,
    NULL
};



const CFieldDescriptor
CRFSurveySpec::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRFSurveySpec::s_fdStartFrequency =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "StartFrequency",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRFSurveySpec::s_fdEndFrequency =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EndFrequency",	// m_pName
    NULL	// m_pEnumTable
};
CRFSurveySpec::CRFSurveySpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaID = 0;
    m_StartFrequency = 0;
    m_EndFrequency = 0;
    m_pRFSurveySpecStopTrigger = NULL;
}

CRFSurveySpec::~CRFSurveySpec (void)
{
}


CElement *
CRFSurveySpec::s_construct (void)
{
    return (CElement *) new CRFSurveySpec();
}


void
CRFSurveySpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRFSurveySpec * pTarget = (CRFSurveySpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_StartFrequency = pDecoderStream->get_u32(&s_fdStartFrequency);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdStartFrequency);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EndFrequency = pDecoderStream->get_u32(&s_fdEndFrequency);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdEndFrequency);
    }
    
}


void
CRFSurveySpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRFSurveySpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of RFSurveySpecStopTrigger
    pType = &CRFSurveySpecStopTrigger::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pRFSurveySpecStopTrigger = (CRFSurveySpecStopTrigger *)*Cur++;
    

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
CRFSurveySpec::setRFSurveySpecStopTrigger (
  CRFSurveySpecStopTrigger *     pValue)
{
    removeSubParameterFromAllList(m_pRFSurveySpecStopTrigger);
    delete m_pRFSurveySpecStopTrigger;
    m_pRFSurveySpecStopTrigger = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRFSurveySpec::addCustom (
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
CRFSurveySpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pEncoderStream->put_u32(m_StartFrequency, &s_fdStartFrequency);

    pEncoderStream->put_u32(m_EndFrequency, &s_fdEndFrequency);

    pType = &CRFSurveySpecStopTrigger::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pRFSurveySpecStopTrigger, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter RFSurveySpecStopTrigger
**
*****************************************************************
*/
  

const CTypeDescriptor
CRFSurveySpecStopTrigger::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RFSurveySpecStopTrigger",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    188,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRFSurveySpecStopTrigger::s_apFieldDescriptorTable[] =
{
  
    &s_fdStopTriggerType,
    &s_fdDurationPeriod,
    &s_fdN,
    NULL
};



const CFieldDescriptor
CRFSurveySpecStopTrigger::s_fdStopTriggerType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "StopTriggerType",	// m_pName
    g_estRFSurveySpecStopTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CRFSurveySpecStopTrigger::s_fdDurationPeriod =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DurationPeriod",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRFSurveySpecStopTrigger::s_fdN =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "N",	// m_pName
    NULL	// m_pEnumTable
};
CRFSurveySpecStopTrigger::CRFSurveySpecStopTrigger (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eStopTriggerType = (ERFSurveySpecStopTriggerType) 0;
    m_DurationPeriod = 0;
    m_N = 0;
}

CRFSurveySpecStopTrigger::~CRFSurveySpecStopTrigger (void)
{
}


CElement *
CRFSurveySpecStopTrigger::s_construct (void)
{
    return (CElement *) new CRFSurveySpecStopTrigger();
}


void
CRFSurveySpecStopTrigger::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRFSurveySpecStopTrigger * pTarget = (CRFSurveySpecStopTrigger *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eStopTriggerType = (ERFSurveySpecStopTriggerType) pDecoderStream->get_e8(&s_fdStopTriggerType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdStopTriggerType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_DurationPeriod = pDecoderStream->get_u32(&s_fdDurationPeriod);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdDurationPeriod);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_N = pDecoderStream->get_u32(&s_fdN);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdN);
    }
    
}


void
CRFSurveySpecStopTrigger::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRFSurveySpecStopTrigger::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CRFSurveySpecStopTrigger::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eStopTriggerType, &s_fdStopTriggerType);

    pEncoderStream->put_u32(m_DurationPeriod, &s_fdDurationPeriod);

    pEncoderStream->put_u32(m_N, &s_fdN);

}




/*
*****************************************************************
**
** Parameter AccessSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    207,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAccessSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessSpecID,
    &s_fdAntennaID,
    &s_fdProtocolID,
    &s_fdCurrentState,
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CAccessSpec::s_fdAccessSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CAccessSpec::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CAccessSpec::s_fdProtocolID =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ProtocolID",	// m_pName
    g_estAirProtocols	// m_pEnumTable
};


const CFieldDescriptor
CAccessSpec::s_fdCurrentState =
{
    CFieldDescriptor::FT_E1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CurrentState",	// m_pName
    g_estAccessSpecState	// m_pEnumTable
};


const CFieldDescriptor
CAccessSpec::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CAccessSpec::CAccessSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AccessSpecID = 0;
    m_AntennaID = 0;
    m_eProtocolID = (EAirProtocols) 0;
    m_eCurrentState = (EAccessSpecState) 0;
    m_ROSpecID = 0;
    m_pAccessSpecStopTrigger = NULL;
    m_pAccessCommand = NULL;
    m_pAccessReportSpec = NULL;
}

CAccessSpec::~CAccessSpec (void)
{
}


CElement *
CAccessSpec::s_construct (void)
{
    return (CElement *) new CAccessSpec();
}


void
CAccessSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAccessSpec * pTarget = (CAccessSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AccessSpecID = pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eProtocolID = (EAirProtocols) pDecoderStream->get_e8(&s_fdProtocolID);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdProtocolID);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eCurrentState = (EAccessSpecState) pDecoderStream->get_e1(&s_fdCurrentState);
    }
    else
    {
        pDecoderStream->get_e1(&s_fdCurrentState);
    }

    pDecoderStream->get_reserved(7);

    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CAccessSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAccessSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of AccessSpecStopTrigger
    pType = &CAccessSpecStopTrigger::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pAccessSpecStopTrigger = (CAccessSpecStopTrigger *)*Cur++;
    

    // 1 of AccessCommand
    pType = &CAccessCommand::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pAccessCommand = (CAccessCommand *)*Cur++;
    

    // 0-1 of AccessReportSpec
    pType = &CAccessReportSpec::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAccessReportSpec = (CAccessReportSpec *)*Cur++;
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
CAccessSpec::setAccessSpecStopTrigger (
  CAccessSpecStopTrigger *     pValue)
{
    removeSubParameterFromAllList(m_pAccessSpecStopTrigger);
    delete m_pAccessSpecStopTrigger;
    m_pAccessSpecStopTrigger = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAccessSpec::setAccessCommand (
  CAccessCommand *     pValue)
{
    removeSubParameterFromAllList(m_pAccessCommand);
    delete m_pAccessCommand;
    m_pAccessCommand = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAccessSpec::setAccessReportSpec (
  CAccessReportSpec *     pValue)
{
    removeSubParameterFromAllList(m_pAccessReportSpec);
    delete m_pAccessReportSpec;
    m_pAccessReportSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAccessSpec::addCustom (
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
CAccessSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_AccessSpecID, &s_fdAccessSpecID);

    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pEncoderStream->put_e8((int)m_eProtocolID, &s_fdProtocolID);

    pEncoderStream->put_e1((int)m_eCurrentState, &s_fdCurrentState);

    pEncoderStream->put_reserved(7);

    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

    pType = &CAccessSpecStopTrigger::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pAccessSpecStopTrigger, pType);
      
    pType = &CAccessCommand::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pAccessCommand, pType);
      
    pType = &CAccessReportSpec::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAccessReportSpec, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter AccessSpecStopTrigger
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessSpecStopTrigger::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessSpecStopTrigger",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    208,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAccessSpecStopTrigger::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessSpecStopTrigger,
    &s_fdOperationCountValue,
    NULL
};



const CFieldDescriptor
CAccessSpecStopTrigger::s_fdAccessSpecStopTrigger =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessSpecStopTrigger",	// m_pName
    g_estAccessSpecStopTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CAccessSpecStopTrigger::s_fdOperationCountValue =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OperationCountValue",	// m_pName
    NULL	// m_pEnumTable
};
CAccessSpecStopTrigger::CAccessSpecStopTrigger (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eAccessSpecStopTrigger = (EAccessSpecStopTriggerType) 0;
    m_OperationCountValue = 0;
}

CAccessSpecStopTrigger::~CAccessSpecStopTrigger (void)
{
}


CElement *
CAccessSpecStopTrigger::s_construct (void)
{
    return (CElement *) new CAccessSpecStopTrigger();
}


void
CAccessSpecStopTrigger::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAccessSpecStopTrigger * pTarget = (CAccessSpecStopTrigger *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eAccessSpecStopTrigger = (EAccessSpecStopTriggerType) pDecoderStream->get_e8(&s_fdAccessSpecStopTrigger);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAccessSpecStopTrigger);
    }

    if(NULL != pTarget)
    {
        pTarget->m_OperationCountValue = pDecoderStream->get_u16(&s_fdOperationCountValue);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdOperationCountValue);
    }
    
}


void
CAccessSpecStopTrigger::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAccessSpecStopTrigger::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CAccessSpecStopTrigger::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eAccessSpecStopTrigger, &s_fdAccessSpecStopTrigger);

    pEncoderStream->put_u16(m_OperationCountValue, &s_fdOperationCountValue);

}




/*
*****************************************************************
**
** Parameter AccessCommand
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessCommand::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessCommand",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    209,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAccessCommand::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CAccessCommand::CAccessCommand (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pAirProtocolTagSpec = NULL;
}

CAccessCommand::~CAccessCommand (void)
{
}


CElement *
CAccessCommand::s_construct (void)
{
    return (CElement *) new CAccessCommand();
}


void
CAccessCommand::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAccessCommand * pTarget = (CAccessCommand *) pTargetElement;

  
}


void
CAccessCommand::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAccessCommand::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of choice AirProtocolTagSpec
    pType = NULL;
  
    if(Cur == End || !CAirProtocolTagSpec::isMember(*Cur))
    {
        goto missing;
    }
    m_pAirProtocolTagSpec = *Cur++;
    

    // 1-N of choice AccessCommandOpSpec
    pType = NULL;
  
    if(Cur == End || !CAccessCommandOpSpec::isMember(*Cur))
    {
        goto missing;
    }
    while(Cur != End && CAccessCommandOpSpec::isMember(*Cur))
    {
        m_listAccessCommandOpSpec.push_back(*Cur);
        Cur++;
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
CAccessCommand::setAirProtocolTagSpec (
  CParameter *                  pValue)
{
    if(!CAirProtocolTagSpec::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    removeSubParameterFromAllList(m_pAirProtocolTagSpec);
    delete m_pAirProtocolTagSpec;
    m_pAirProtocolTagSpec = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAccessCommand::addAccessCommandOpSpec (
  CParameter *                  pValue)
{
    if(!CAccessCommandOpSpec::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listAccessCommandOpSpec.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAccessCommand::addCustom (
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
CAccessCommand::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = NULL;
      
    pEncoderStream->putRequiredSubParameter(m_pAirProtocolTagSpec, pType);
      
    pType = NULL;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listAccessCommandOpSpec, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter LLRPConfigurationStateValue
**
*****************************************************************
*/
  

const CTypeDescriptor
CLLRPConfigurationStateValue::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "LLRPConfigurationStateValue",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    217,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CLLRPConfigurationStateValue::s_apFieldDescriptorTable[] =
{
  
    &s_fdLLRPConfigurationStateValue,
    NULL
};



const CFieldDescriptor
CLLRPConfigurationStateValue::s_fdLLRPConfigurationStateValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "LLRPConfigurationStateValue",	// m_pName
    NULL	// m_pEnumTable
};
CLLRPConfigurationStateValue::CLLRPConfigurationStateValue (void)
{
    m_pType = &s_typeDescriptor;
  
    m_LLRPConfigurationStateValue = 0;
}

CLLRPConfigurationStateValue::~CLLRPConfigurationStateValue (void)
{
}


CElement *
CLLRPConfigurationStateValue::s_construct (void)
{
    return (CElement *) new CLLRPConfigurationStateValue();
}


void
CLLRPConfigurationStateValue::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CLLRPConfigurationStateValue * pTarget = (CLLRPConfigurationStateValue *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_LLRPConfigurationStateValue = pDecoderStream->get_u32(&s_fdLLRPConfigurationStateValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdLLRPConfigurationStateValue);
    }
    
}


void
CLLRPConfigurationStateValue::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CLLRPConfigurationStateValue::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CLLRPConfigurationStateValue::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_LLRPConfigurationStateValue, &s_fdLLRPConfigurationStateValue);

}




/*
*****************************************************************
**
** Parameter Identification
**
*****************************************************************
*/
  

const CTypeDescriptor
CIdentification::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "Identification",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    218,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CIdentification::s_apFieldDescriptorTable[] =
{
  
    &s_fdIDType,
    &s_fdReaderID,
    NULL
};



const CFieldDescriptor
CIdentification::s_fdIDType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "IDType",	// m_pName
    g_estIdentificationType	// m_pEnumTable
};


const CFieldDescriptor
CIdentification::s_fdReaderID =
{
    CFieldDescriptor::FT_U8V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "ReaderID",	// m_pName
    NULL	// m_pEnumTable
};
CIdentification::CIdentification (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eIDType = (EIdentificationType) 0;
}

CIdentification::~CIdentification (void)
{
}


CElement *
CIdentification::s_construct (void)
{
    return (CElement *) new CIdentification();
}


void
CIdentification::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CIdentification * pTarget = (CIdentification *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eIDType = (EIdentificationType) pDecoderStream->get_e8(&s_fdIDType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdIDType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_ReaderID = pDecoderStream->get_u8v(&s_fdReaderID);
    }
    else
    {
        pDecoderStream->get_u8v(&s_fdReaderID);
    }
    
}


void
CIdentification::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CIdentification::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CIdentification::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eIDType, &s_fdIDType);

    pEncoderStream->put_u8v(m_ReaderID, &s_fdReaderID);

}




/*
*****************************************************************
**
** Parameter GPOWriteData
**
*****************************************************************
*/
  

const CTypeDescriptor
CGPOWriteData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "GPOWriteData",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    219,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGPOWriteData::s_apFieldDescriptorTable[] =
{
  
    &s_fdGPOPortNumber,
    &s_fdGPOData,
    NULL
};



const CFieldDescriptor
CGPOWriteData::s_fdGPOPortNumber =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPOPortNumber",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPOWriteData::s_fdGPOData =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPOData",	// m_pName
    NULL	// m_pEnumTable
};
CGPOWriteData::CGPOWriteData (void)
{
    m_pType = &s_typeDescriptor;
  
    m_GPOPortNumber = 0;
    m_GPOData = 0;
}

CGPOWriteData::~CGPOWriteData (void)
{
}


CElement *
CGPOWriteData::s_construct (void)
{
    return (CElement *) new CGPOWriteData();
}


void
CGPOWriteData::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGPOWriteData * pTarget = (CGPOWriteData *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_GPOPortNumber = pDecoderStream->get_u16(&s_fdGPOPortNumber);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdGPOPortNumber);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_GPOData = pDecoderStream->get_u1(&s_fdGPOData);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdGPOData);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CGPOWriteData::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGPOWriteData::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGPOWriteData::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_GPOPortNumber, &s_fdGPOPortNumber);

    pEncoderStream->put_u1(m_GPOData, &s_fdGPOData);

    pEncoderStream->put_reserved(7);

}




/*
*****************************************************************
**
** Parameter KeepaliveSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CKeepaliveSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "KeepaliveSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    220,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CKeepaliveSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdKeepaliveTriggerType,
    &s_fdPeriodicTriggerValue,
    NULL
};



const CFieldDescriptor
CKeepaliveSpec::s_fdKeepaliveTriggerType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "KeepaliveTriggerType",	// m_pName
    g_estKeepaliveTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CKeepaliveSpec::s_fdPeriodicTriggerValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PeriodicTriggerValue",	// m_pName
    NULL	// m_pEnumTable
};
CKeepaliveSpec::CKeepaliveSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eKeepaliveTriggerType = (EKeepaliveTriggerType) 0;
    m_PeriodicTriggerValue = 0;
}

CKeepaliveSpec::~CKeepaliveSpec (void)
{
}


CElement *
CKeepaliveSpec::s_construct (void)
{
    return (CElement *) new CKeepaliveSpec();
}


void
CKeepaliveSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CKeepaliveSpec * pTarget = (CKeepaliveSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eKeepaliveTriggerType = (EKeepaliveTriggerType) pDecoderStream->get_e8(&s_fdKeepaliveTriggerType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdKeepaliveTriggerType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_PeriodicTriggerValue = pDecoderStream->get_u32(&s_fdPeriodicTriggerValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdPeriodicTriggerValue);
    }
    
}


void
CKeepaliveSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CKeepaliveSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CKeepaliveSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eKeepaliveTriggerType, &s_fdKeepaliveTriggerType);

    pEncoderStream->put_u32(m_PeriodicTriggerValue, &s_fdPeriodicTriggerValue);

}




/*
*****************************************************************
**
** Parameter AntennaProperties
**
*****************************************************************
*/
  

const CTypeDescriptor
CAntennaProperties::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AntennaProperties",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    221,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAntennaProperties::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaConnected,
    &s_fdAntennaID,
    &s_fdAntennaGain,
    NULL
};



const CFieldDescriptor
CAntennaProperties::s_fdAntennaConnected =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaConnected",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CAntennaProperties::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CAntennaProperties::s_fdAntennaGain =
{
    CFieldDescriptor::FT_S16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaGain",	// m_pName
    NULL	// m_pEnumTable
};
CAntennaProperties::CAntennaProperties (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaConnected = 0;
    m_AntennaID = 0;
    m_AntennaGain = 0;
}

CAntennaProperties::~CAntennaProperties (void)
{
}


CElement *
CAntennaProperties::s_construct (void)
{
    return (CElement *) new CAntennaProperties();
}


void
CAntennaProperties::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAntennaProperties * pTarget = (CAntennaProperties *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaConnected = pDecoderStream->get_u1(&s_fdAntennaConnected);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdAntennaConnected);
    }
    
    pDecoderStream->get_reserved(7);

    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AntennaGain = pDecoderStream->get_s16(&s_fdAntennaGain);
    }
    else
    {
        pDecoderStream->get_s16(&s_fdAntennaGain);
    }
    
}


void
CAntennaProperties::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAntennaProperties::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CAntennaProperties::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_AntennaConnected, &s_fdAntennaConnected);

    pEncoderStream->put_reserved(7);

    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pEncoderStream->put_s16(m_AntennaGain, &s_fdAntennaGain);

}




/*
*****************************************************************
**
** Parameter AntennaConfiguration
**
*****************************************************************
*/
  

const CTypeDescriptor
CAntennaConfiguration::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AntennaConfiguration",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    222,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAntennaConfiguration::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaID,
    NULL
};



const CFieldDescriptor
CAntennaConfiguration::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};
CAntennaConfiguration::CAntennaConfiguration (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaID = 0;
    m_pRFReceiver = NULL;
    m_pRFTransmitter = NULL;
}

CAntennaConfiguration::~CAntennaConfiguration (void)
{
}


CElement *
CAntennaConfiguration::s_construct (void)
{
    return (CElement *) new CAntennaConfiguration();
}


void
CAntennaConfiguration::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAntennaConfiguration * pTarget = (CAntennaConfiguration *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
}


void
CAntennaConfiguration::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAntennaConfiguration::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of RFReceiver
    pType = &CRFReceiver::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pRFReceiver = (CRFReceiver *)*Cur++;
    }
    

    // 0-1 of RFTransmitter
    pType = &CRFTransmitter::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pRFTransmitter = (CRFTransmitter *)*Cur++;
    }
    

    // 0-N of choice AirProtocolInventoryCommandSettings
    pType = NULL;
  
    while(Cur != End && CAirProtocolInventoryCommandSettings::isMember(*Cur))
    {
        m_listAirProtocolInventoryCommandSettings.push_back(*Cur);
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
CAntennaConfiguration::setRFReceiver (
  CRFReceiver *     pValue)
{
    removeSubParameterFromAllList(m_pRFReceiver);
    delete m_pRFReceiver;
    m_pRFReceiver = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAntennaConfiguration::setRFTransmitter (
  CRFTransmitter *     pValue)
{
    removeSubParameterFromAllList(m_pRFTransmitter);
    delete m_pRFTransmitter;
    m_pRFTransmitter = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CAntennaConfiguration::addAirProtocolInventoryCommandSettings (
  CParameter *                  pValue)
{
    if(!CAirProtocolInventoryCommandSettings::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listAirProtocolInventoryCommandSettings.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CAntennaConfiguration::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

    pType = &CRFReceiver::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pRFReceiver, pType);
      
    pType = &CRFTransmitter::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pRFTransmitter, pType);
      
    pType = NULL;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAirProtocolInventoryCommandSettings, pType);
      
}




/*
*****************************************************************
**
** Parameter RFReceiver
**
*****************************************************************
*/
  

const CTypeDescriptor
CRFReceiver::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RFReceiver",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    223,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRFReceiver::s_apFieldDescriptorTable[] =
{
  
    &s_fdReceiverSensitivity,
    NULL
};



const CFieldDescriptor
CRFReceiver::s_fdReceiverSensitivity =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReceiverSensitivity",	// m_pName
    NULL	// m_pEnumTable
};
CRFReceiver::CRFReceiver (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ReceiverSensitivity = 0;
}

CRFReceiver::~CRFReceiver (void)
{
}


CElement *
CRFReceiver::s_construct (void)
{
    return (CElement *) new CRFReceiver();
}


void
CRFReceiver::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRFReceiver * pTarget = (CRFReceiver *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ReceiverSensitivity = pDecoderStream->get_u16(&s_fdReceiverSensitivity);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdReceiverSensitivity);
    }
    
}


void
CRFReceiver::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRFReceiver::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CRFReceiver::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_ReceiverSensitivity, &s_fdReceiverSensitivity);

}




/*
*****************************************************************
**
** Parameter RFTransmitter
**
*****************************************************************
*/
  

const CTypeDescriptor
CRFTransmitter::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RFTransmitter",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    224,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRFTransmitter::s_apFieldDescriptorTable[] =
{
  
    &s_fdHopTableID,
    &s_fdChannelIndex,
    &s_fdTransmitPower,
    NULL
};



const CFieldDescriptor
CRFTransmitter::s_fdHopTableID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "HopTableID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRFTransmitter::s_fdChannelIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ChannelIndex",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRFTransmitter::s_fdTransmitPower =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TransmitPower",	// m_pName
    NULL	// m_pEnumTable
};
CRFTransmitter::CRFTransmitter (void)
{
    m_pType = &s_typeDescriptor;
  
    m_HopTableID = 0;
    m_ChannelIndex = 0;
    m_TransmitPower = 0;
}

CRFTransmitter::~CRFTransmitter (void)
{
}


CElement *
CRFTransmitter::s_construct (void)
{
    return (CElement *) new CRFTransmitter();
}


void
CRFTransmitter::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRFTransmitter * pTarget = (CRFTransmitter *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_HopTableID = pDecoderStream->get_u16(&s_fdHopTableID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdHopTableID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_ChannelIndex = pDecoderStream->get_u16(&s_fdChannelIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdChannelIndex);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_TransmitPower = pDecoderStream->get_u16(&s_fdTransmitPower);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdTransmitPower);
    }
    
}


void
CRFTransmitter::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRFTransmitter::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CRFTransmitter::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_HopTableID, &s_fdHopTableID);

    pEncoderStream->put_u16(m_ChannelIndex, &s_fdChannelIndex);

    pEncoderStream->put_u16(m_TransmitPower, &s_fdTransmitPower);

}




/*
*****************************************************************
**
** Parameter GPIPortCurrentState
**
*****************************************************************
*/
  

const CTypeDescriptor
CGPIPortCurrentState::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "GPIPortCurrentState",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    225,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGPIPortCurrentState::s_apFieldDescriptorTable[] =
{
  
    &s_fdGPIPortNum,
    &s_fdConfig,
    &s_fdState,
    NULL
};



const CFieldDescriptor
CGPIPortCurrentState::s_fdGPIPortNum =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIPortNum",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPIPortCurrentState::s_fdConfig =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Config",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPIPortCurrentState::s_fdState =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "State",	// m_pName
    g_estGPIPortState	// m_pEnumTable
};
CGPIPortCurrentState::CGPIPortCurrentState (void)
{
    m_pType = &s_typeDescriptor;
  
    m_GPIPortNum = 0;
    m_Config = 0;
    m_eState = (EGPIPortState) 0;
}

CGPIPortCurrentState::~CGPIPortCurrentState (void)
{
}


CElement *
CGPIPortCurrentState::s_construct (void)
{
    return (CElement *) new CGPIPortCurrentState();
}


void
CGPIPortCurrentState::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGPIPortCurrentState * pTarget = (CGPIPortCurrentState *) pTargetElement;

  
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
        pTarget->m_Config = pDecoderStream->get_u1(&s_fdConfig);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdConfig);
    }
    
    pDecoderStream->get_reserved(7);

    if(NULL != pTarget)
    {
        pTarget->m_eState = (EGPIPortState) pDecoderStream->get_e8(&s_fdState);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdState);
    }

}


void
CGPIPortCurrentState::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGPIPortCurrentState::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGPIPortCurrentState::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_GPIPortNum, &s_fdGPIPortNum);

    pEncoderStream->put_u1(m_Config, &s_fdConfig);

    pEncoderStream->put_reserved(7);

    pEncoderStream->put_e8((int)m_eState, &s_fdState);

}




/*
*****************************************************************
**
** Parameter EventsAndReports
**
*****************************************************************
*/
  

const CTypeDescriptor
CEventsAndReports::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "EventsAndReports",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    226,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CEventsAndReports::s_apFieldDescriptorTable[] =
{
  
    &s_fdHoldEventsAndReportsUponReconnect,
    NULL
};



const CFieldDescriptor
CEventsAndReports::s_fdHoldEventsAndReportsUponReconnect =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "HoldEventsAndReportsUponReconnect",	// m_pName
    NULL	// m_pEnumTable
};
CEventsAndReports::CEventsAndReports (void)
{
    m_pType = &s_typeDescriptor;
  
    m_HoldEventsAndReportsUponReconnect = 0;
}

CEventsAndReports::~CEventsAndReports (void)
{
}


CElement *
CEventsAndReports::s_construct (void)
{
    return (CElement *) new CEventsAndReports();
}


void
CEventsAndReports::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CEventsAndReports * pTarget = (CEventsAndReports *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_HoldEventsAndReportsUponReconnect = pDecoderStream->get_u1(&s_fdHoldEventsAndReportsUponReconnect);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdHoldEventsAndReportsUponReconnect);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CEventsAndReports::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CEventsAndReports::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CEventsAndReports::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_HoldEventsAndReportsUponReconnect, &s_fdHoldEventsAndReportsUponReconnect);

    pEncoderStream->put_reserved(7);

}




/*
*****************************************************************
**
** Parameter ROReportSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CROReportSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROReportSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    237,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROReportSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdROReportTrigger,
    &s_fdN,
    NULL
};



const CFieldDescriptor
CROReportSpec::s_fdROReportTrigger =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROReportTrigger",	// m_pName
    g_estROReportTriggerType	// m_pEnumTable
};


const CFieldDescriptor
CROReportSpec::s_fdN =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "N",	// m_pName
    NULL	// m_pEnumTable
};
CROReportSpec::CROReportSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eROReportTrigger = (EROReportTriggerType) 0;
    m_N = 0;
    m_pTagReportContentSelector = NULL;
}

CROReportSpec::~CROReportSpec (void)
{
}


CElement *
CROReportSpec::s_construct (void)
{
    return (CElement *) new CROReportSpec();
}


void
CROReportSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROReportSpec * pTarget = (CROReportSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eROReportTrigger = (EROReportTriggerType) pDecoderStream->get_e8(&s_fdROReportTrigger);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdROReportTrigger);
    }

    if(NULL != pTarget)
    {
        pTarget->m_N = pDecoderStream->get_u16(&s_fdN);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdN);
    }
    
}


void
CROReportSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROReportSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of TagReportContentSelector
    pType = &CTagReportContentSelector::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pTagReportContentSelector = (CTagReportContentSelector *)*Cur++;
    

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
CROReportSpec::setTagReportContentSelector (
  CTagReportContentSelector *     pValue)
{
    removeSubParameterFromAllList(m_pTagReportContentSelector);
    delete m_pTagReportContentSelector;
    m_pTagReportContentSelector = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CROReportSpec::addCustom (
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
CROReportSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eROReportTrigger, &s_fdROReportTrigger);

    pEncoderStream->put_u16(m_N, &s_fdN);

    pType = &CTagReportContentSelector::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pTagReportContentSelector, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter TagReportContentSelector
**
*****************************************************************
*/
  

const CTypeDescriptor
CTagReportContentSelector::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "TagReportContentSelector",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    238,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CTagReportContentSelector::s_apFieldDescriptorTable[] =
{
  
    &s_fdEnableROSpecID,
    &s_fdEnableSpecIndex,
    &s_fdEnableInventoryParameterSpecID,
    &s_fdEnableAntennaID,
    &s_fdEnableChannelIndex,
    &s_fdEnablePeakRSSI,
    &s_fdEnableFirstSeenTimestamp,
    &s_fdEnableLastSeenTimestamp,
    &s_fdEnableTagSeenCount,
    &s_fdEnableAccessSpecID,
    NULL
};



const CFieldDescriptor
CTagReportContentSelector::s_fdEnableROSpecID =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableROSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableSpecIndex =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableSpecIndex",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableInventoryParameterSpecID =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableInventoryParameterSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableAntennaID =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableAntennaID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableChannelIndex =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableChannelIndex",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnablePeakRSSI =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnablePeakRSSI",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableFirstSeenTimestamp =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableFirstSeenTimestamp",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableLastSeenTimestamp =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableLastSeenTimestamp",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableTagSeenCount =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableTagSeenCount",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CTagReportContentSelector::s_fdEnableAccessSpecID =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableAccessSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CTagReportContentSelector::CTagReportContentSelector (void)
{
    m_pType = &s_typeDescriptor;
  
    m_EnableROSpecID = 0;
    m_EnableSpecIndex = 0;
    m_EnableInventoryParameterSpecID = 0;
    m_EnableAntennaID = 0;
    m_EnableChannelIndex = 0;
    m_EnablePeakRSSI = 0;
    m_EnableFirstSeenTimestamp = 0;
    m_EnableLastSeenTimestamp = 0;
    m_EnableTagSeenCount = 0;
    m_EnableAccessSpecID = 0;
}

CTagReportContentSelector::~CTagReportContentSelector (void)
{
}


CElement *
CTagReportContentSelector::s_construct (void)
{
    return (CElement *) new CTagReportContentSelector();
}


void
CTagReportContentSelector::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CTagReportContentSelector * pTarget = (CTagReportContentSelector *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_EnableROSpecID = pDecoderStream->get_u1(&s_fdEnableROSpecID);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableROSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableSpecIndex = pDecoderStream->get_u1(&s_fdEnableSpecIndex);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableSpecIndex);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableInventoryParameterSpecID = pDecoderStream->get_u1(&s_fdEnableInventoryParameterSpecID);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableInventoryParameterSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableAntennaID = pDecoderStream->get_u1(&s_fdEnableAntennaID);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableAntennaID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableChannelIndex = pDecoderStream->get_u1(&s_fdEnableChannelIndex);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableChannelIndex);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnablePeakRSSI = pDecoderStream->get_u1(&s_fdEnablePeakRSSI);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnablePeakRSSI);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableFirstSeenTimestamp = pDecoderStream->get_u1(&s_fdEnableFirstSeenTimestamp);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableFirstSeenTimestamp);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableLastSeenTimestamp = pDecoderStream->get_u1(&s_fdEnableLastSeenTimestamp);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableLastSeenTimestamp);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableTagSeenCount = pDecoderStream->get_u1(&s_fdEnableTagSeenCount);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableTagSeenCount);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnableAccessSpecID = pDecoderStream->get_u1(&s_fdEnableAccessSpecID);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableAccessSpecID);
    }
    
    pDecoderStream->get_reserved(6);

}


void
CTagReportContentSelector::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CTagReportContentSelector::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of choice AirProtocolEPCMemorySelector
    pType = NULL;
  
    while(Cur != End && CAirProtocolEPCMemorySelector::isMember(*Cur))
    {
        m_listAirProtocolEPCMemorySelector.push_back(*Cur);
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
CTagReportContentSelector::addAirProtocolEPCMemorySelector (
  CParameter *                  pValue)
{
    if(!CAirProtocolEPCMemorySelector::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listAirProtocolEPCMemorySelector.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CTagReportContentSelector::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_EnableROSpecID, &s_fdEnableROSpecID);

    pEncoderStream->put_u1(m_EnableSpecIndex, &s_fdEnableSpecIndex);

    pEncoderStream->put_u1(m_EnableInventoryParameterSpecID, &s_fdEnableInventoryParameterSpecID);

    pEncoderStream->put_u1(m_EnableAntennaID, &s_fdEnableAntennaID);

    pEncoderStream->put_u1(m_EnableChannelIndex, &s_fdEnableChannelIndex);

    pEncoderStream->put_u1(m_EnablePeakRSSI, &s_fdEnablePeakRSSI);

    pEncoderStream->put_u1(m_EnableFirstSeenTimestamp, &s_fdEnableFirstSeenTimestamp);

    pEncoderStream->put_u1(m_EnableLastSeenTimestamp, &s_fdEnableLastSeenTimestamp);

    pEncoderStream->put_u1(m_EnableTagSeenCount, &s_fdEnableTagSeenCount);

    pEncoderStream->put_u1(m_EnableAccessSpecID, &s_fdEnableAccessSpecID);

    pEncoderStream->put_reserved(6);

    pType = NULL;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAirProtocolEPCMemorySelector, pType);
      
}




/*
*****************************************************************
**
** Parameter AccessReportSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessReportSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessReportSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    239,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAccessReportSpec::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessReportTrigger,
    NULL
};



const CFieldDescriptor
CAccessReportSpec::s_fdAccessReportTrigger =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessReportTrigger",	// m_pName
    g_estAccessReportTriggerType	// m_pEnumTable
};
CAccessReportSpec::CAccessReportSpec (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eAccessReportTrigger = (EAccessReportTriggerType) 0;
}

CAccessReportSpec::~CAccessReportSpec (void)
{
}


CElement *
CAccessReportSpec::s_construct (void)
{
    return (CElement *) new CAccessReportSpec();
}


void
CAccessReportSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAccessReportSpec * pTarget = (CAccessReportSpec *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eAccessReportTrigger = (EAccessReportTriggerType) pDecoderStream->get_e8(&s_fdAccessReportTrigger);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAccessReportTrigger);
    }

}


void
CAccessReportSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAccessReportSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CAccessReportSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eAccessReportTrigger, &s_fdAccessReportTrigger);

}




/*
*****************************************************************
**
** Parameter TagReportData
**
*****************************************************************
*/
  

const CTypeDescriptor
CTagReportData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "TagReportData",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    240,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CTagReportData::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CTagReportData::CTagReportData (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pEPCParameter = NULL;
    m_pROSpecID = NULL;
    m_pSpecIndex = NULL;
    m_pInventoryParameterSpecID = NULL;
    m_pAntennaID = NULL;
    m_pPeakRSSI = NULL;
    m_pChannelIndex = NULL;
    m_pFirstSeenTimestampUTC = NULL;
    m_pFirstSeenTimestampUptime = NULL;
    m_pLastSeenTimestampUTC = NULL;
    m_pLastSeenTimestampUptime = NULL;
    m_pTagSeenCount = NULL;
    m_pAccessSpecID = NULL;
}

CTagReportData::~CTagReportData (void)
{
}


CElement *
CTagReportData::s_construct (void)
{
    return (CElement *) new CTagReportData();
}


void
CTagReportData::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CTagReportData * pTarget = (CTagReportData *) pTargetElement;

  
}


void
CTagReportData::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CTagReportData::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of choice EPCParameter
    pType = NULL;
  
    if(Cur == End || !CEPCParameter::isMember(*Cur))
    {
        goto missing;
    }
    m_pEPCParameter = *Cur++;
    

    // 0-1 of ROSpecID
    pType = &CROSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROSpecID = (CROSpecID *)*Cur++;
    }
    

    // 0-1 of SpecIndex
    pType = &CSpecIndex::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pSpecIndex = (CSpecIndex *)*Cur++;
    }
    

    // 0-1 of InventoryParameterSpecID
    pType = &CInventoryParameterSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pInventoryParameterSpecID = (CInventoryParameterSpecID *)*Cur++;
    }
    

    // 0-1 of AntennaID
    pType = &CAntennaID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAntennaID = (CAntennaID *)*Cur++;
    }
    

    // 0-1 of PeakRSSI
    pType = &CPeakRSSI::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pPeakRSSI = (CPeakRSSI *)*Cur++;
    }
    

    // 0-1 of ChannelIndex
    pType = &CChannelIndex::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pChannelIndex = (CChannelIndex *)*Cur++;
    }
    

    // 0-1 of FirstSeenTimestampUTC
    pType = &CFirstSeenTimestampUTC::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pFirstSeenTimestampUTC = (CFirstSeenTimestampUTC *)*Cur++;
    }
    

    // 0-1 of FirstSeenTimestampUptime
    pType = &CFirstSeenTimestampUptime::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pFirstSeenTimestampUptime = (CFirstSeenTimestampUptime *)*Cur++;
    }
    

    // 0-1 of LastSeenTimestampUTC
    pType = &CLastSeenTimestampUTC::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pLastSeenTimestampUTC = (CLastSeenTimestampUTC *)*Cur++;
    }
    

    // 0-1 of LastSeenTimestampUptime
    pType = &CLastSeenTimestampUptime::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pLastSeenTimestampUptime = (CLastSeenTimestampUptime *)*Cur++;
    }
    

    // 0-1 of TagSeenCount
    pType = &CTagSeenCount::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pTagSeenCount = (CTagSeenCount *)*Cur++;
    }
    

    // 0-N of choice AirProtocolTagData
    pType = NULL;
  
    while(Cur != End && CAirProtocolTagData::isMember(*Cur))
    {
        m_listAirProtocolTagData.push_back(*Cur);
        Cur++;
    }
    

    // 0-1 of AccessSpecID
    pType = &CAccessSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAccessSpecID = (CAccessSpecID *)*Cur++;
    }
    

    // 0-N of choice AccessCommandOpSpecResult
    pType = NULL;
  
    while(Cur != End && CAccessCommandOpSpecResult::isMember(*Cur))
    {
        m_listAccessCommandOpSpecResult.push_back(*Cur);
        Cur++;
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
CTagReportData::setEPCParameter (
  CParameter *                  pValue)
{
    if(!CEPCParameter::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    removeSubParameterFromAllList(m_pEPCParameter);
    delete m_pEPCParameter;
    m_pEPCParameter = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setROSpecID (
  CROSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pROSpecID);
    delete m_pROSpecID;
    m_pROSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setSpecIndex (
  CSpecIndex *     pValue)
{
    removeSubParameterFromAllList(m_pSpecIndex);
    delete m_pSpecIndex;
    m_pSpecIndex = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setInventoryParameterSpecID (
  CInventoryParameterSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pInventoryParameterSpecID);
    delete m_pInventoryParameterSpecID;
    m_pInventoryParameterSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setAntennaID (
  CAntennaID *     pValue)
{
    removeSubParameterFromAllList(m_pAntennaID);
    delete m_pAntennaID;
    m_pAntennaID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setPeakRSSI (
  CPeakRSSI *     pValue)
{
    removeSubParameterFromAllList(m_pPeakRSSI);
    delete m_pPeakRSSI;
    m_pPeakRSSI = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setChannelIndex (
  CChannelIndex *     pValue)
{
    removeSubParameterFromAllList(m_pChannelIndex);
    delete m_pChannelIndex;
    m_pChannelIndex = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setFirstSeenTimestampUTC (
  CFirstSeenTimestampUTC *     pValue)
{
    removeSubParameterFromAllList(m_pFirstSeenTimestampUTC);
    delete m_pFirstSeenTimestampUTC;
    m_pFirstSeenTimestampUTC = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setFirstSeenTimestampUptime (
  CFirstSeenTimestampUptime *     pValue)
{
    removeSubParameterFromAllList(m_pFirstSeenTimestampUptime);
    delete m_pFirstSeenTimestampUptime;
    m_pFirstSeenTimestampUptime = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setLastSeenTimestampUTC (
  CLastSeenTimestampUTC *     pValue)
{
    removeSubParameterFromAllList(m_pLastSeenTimestampUTC);
    delete m_pLastSeenTimestampUTC;
    m_pLastSeenTimestampUTC = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setLastSeenTimestampUptime (
  CLastSeenTimestampUptime *     pValue)
{
    removeSubParameterFromAllList(m_pLastSeenTimestampUptime);
    delete m_pLastSeenTimestampUptime;
    m_pLastSeenTimestampUptime = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setTagSeenCount (
  CTagSeenCount *     pValue)
{
    removeSubParameterFromAllList(m_pTagSeenCount);
    delete m_pTagSeenCount;
    m_pTagSeenCount = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::addAirProtocolTagData (
  CParameter *                  pValue)
{
    if(!CAirProtocolTagData::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listAirProtocolTagData.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::setAccessSpecID (
  CAccessSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pAccessSpecID);
    delete m_pAccessSpecID;
    m_pAccessSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::addAccessCommandOpSpecResult (
  CParameter *                  pValue)
{
    if(!CAccessCommandOpSpecResult::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    m_listAccessCommandOpSpecResult.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CTagReportData::addCustom (
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
CTagReportData::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = NULL;
      
    pEncoderStream->putRequiredSubParameter(m_pEPCParameter, pType);
      
    pType = &CROSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROSpecID, pType);
      
    pType = &CSpecIndex::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pSpecIndex, pType);
      
    pType = &CInventoryParameterSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pInventoryParameterSpecID, pType);
      
    pType = &CAntennaID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAntennaID, pType);
      
    pType = &CPeakRSSI::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pPeakRSSI, pType);
      
    pType = &CChannelIndex::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pChannelIndex, pType);
      
    pType = &CFirstSeenTimestampUTC::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pFirstSeenTimestampUTC, pType);
      
    pType = &CFirstSeenTimestampUptime::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pFirstSeenTimestampUptime, pType);
      
    pType = &CLastSeenTimestampUTC::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pLastSeenTimestampUTC, pType);
      
    pType = &CLastSeenTimestampUptime::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pLastSeenTimestampUptime, pType);
      
    pType = &CTagSeenCount::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pTagSeenCount, pType);
      
    pType = NULL;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAirProtocolTagData, pType);
      
    pType = &CAccessSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAccessSpecID, pType);
      
    pType = NULL;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listAccessCommandOpSpecResult, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter EPCData
**
*****************************************************************
*/
  

const CTypeDescriptor
CEPCData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "EPCData",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    241,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CEPCData::s_apFieldDescriptorTable[] =
{
  
    &s_fdEPC,
    NULL
};



const CFieldDescriptor
CEPCData::s_fdEPC =
{
    CFieldDescriptor::FT_U1V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "EPC",	// m_pName
    NULL	// m_pEnumTable
};
CEPCData::CEPCData (void)
{
    m_pType = &s_typeDescriptor;
  
}

CEPCData::~CEPCData (void)
{
}


CElement *
CEPCData::s_construct (void)
{
    return (CElement *) new CEPCData();
}


void
CEPCData::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CEPCData * pTarget = (CEPCData *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_EPC = pDecoderStream->get_u1v(&s_fdEPC);
    }
    else
    {
        pDecoderStream->get_u1v(&s_fdEPC);
    }
    
}


void
CEPCData::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CEPCData::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CEPCData::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1v(m_EPC, &s_fdEPC);

}




/*
*****************************************************************
**
** Parameter EPC_96
**
*****************************************************************
*/
  

const CTypeDescriptor
CEPC_96::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "EPC_96",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    13,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CEPC_96::s_apFieldDescriptorTable[] =
{
  
    &s_fdEPC,
    NULL
};



const CFieldDescriptor
CEPC_96::s_fdEPC =
{
    CFieldDescriptor::FT_U96,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "EPC",	// m_pName
    NULL	// m_pEnumTable
};
CEPC_96::CEPC_96 (void)
{
    m_pType = &s_typeDescriptor;
  
}

CEPC_96::~CEPC_96 (void)
{
}


CElement *
CEPC_96::s_construct (void)
{
    return (CElement *) new CEPC_96();
}


void
CEPC_96::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CEPC_96 * pTarget = (CEPC_96 *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_EPC = pDecoderStream->get_u96(&s_fdEPC);
    }
    else
    {
        pDecoderStream->get_u96(&s_fdEPC);
    }
    
}


void
CEPC_96::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CEPC_96::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CEPC_96::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u96(m_EPC, &s_fdEPC);

}




/*
*****************************************************************
**
** Parameter ROSpecID
**
*****************************************************************
*/
  

const CTypeDescriptor
CROSpecID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROSpecID",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    9,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROSpecID::s_apFieldDescriptorTable[] =
{
  
    &s_fdROSpecID,
    NULL
};



const CFieldDescriptor
CROSpecID::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CROSpecID::CROSpecID (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ROSpecID = 0;
}

CROSpecID::~CROSpecID (void)
{
}


CElement *
CROSpecID::s_construct (void)
{
    return (CElement *) new CROSpecID();
}


void
CROSpecID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROSpecID * pTarget = (CROSpecID *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
}


void
CROSpecID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROSpecID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CROSpecID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

}




/*
*****************************************************************
**
** Parameter SpecIndex
**
*****************************************************************
*/
  

const CTypeDescriptor
CSpecIndex::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "SpecIndex",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    14,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CSpecIndex::s_apFieldDescriptorTable[] =
{
  
    &s_fdSpecIndex,
    NULL
};



const CFieldDescriptor
CSpecIndex::s_fdSpecIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SpecIndex",	// m_pName
    NULL	// m_pEnumTable
};
CSpecIndex::CSpecIndex (void)
{
    m_pType = &s_typeDescriptor;
  
    m_SpecIndex = 0;
}

CSpecIndex::~CSpecIndex (void)
{
}


CElement *
CSpecIndex::s_construct (void)
{
    return (CElement *) new CSpecIndex();
}


void
CSpecIndex::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CSpecIndex * pTarget = (CSpecIndex *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_SpecIndex = pDecoderStream->get_u16(&s_fdSpecIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdSpecIndex);
    }
    
}


void
CSpecIndex::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CSpecIndex::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CSpecIndex::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_SpecIndex, &s_fdSpecIndex);

}




/*
*****************************************************************
**
** Parameter InventoryParameterSpecID
**
*****************************************************************
*/
  

const CTypeDescriptor
CInventoryParameterSpecID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "InventoryParameterSpecID",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    10,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CInventoryParameterSpecID::s_apFieldDescriptorTable[] =
{
  
    &s_fdInventoryParameterSpecID,
    NULL
};



const CFieldDescriptor
CInventoryParameterSpecID::s_fdInventoryParameterSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "InventoryParameterSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CInventoryParameterSpecID::CInventoryParameterSpecID (void)
{
    m_pType = &s_typeDescriptor;
  
    m_InventoryParameterSpecID = 0;
}

CInventoryParameterSpecID::~CInventoryParameterSpecID (void)
{
}


CElement *
CInventoryParameterSpecID::s_construct (void)
{
    return (CElement *) new CInventoryParameterSpecID();
}


void
CInventoryParameterSpecID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CInventoryParameterSpecID * pTarget = (CInventoryParameterSpecID *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_InventoryParameterSpecID = pDecoderStream->get_u16(&s_fdInventoryParameterSpecID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdInventoryParameterSpecID);
    }
    
}


void
CInventoryParameterSpecID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CInventoryParameterSpecID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CInventoryParameterSpecID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_InventoryParameterSpecID, &s_fdInventoryParameterSpecID);

}




/*
*****************************************************************
**
** Parameter AntennaID
**
*****************************************************************
*/
  

const CTypeDescriptor
CAntennaID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AntennaID",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    1,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAntennaID::s_apFieldDescriptorTable[] =
{
  
    &s_fdAntennaID,
    NULL
};



const CFieldDescriptor
CAntennaID::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};
CAntennaID::CAntennaID (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AntennaID = 0;
}

CAntennaID::~CAntennaID (void)
{
}


CElement *
CAntennaID::s_construct (void)
{
    return (CElement *) new CAntennaID();
}


void
CAntennaID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAntennaID * pTarget = (CAntennaID *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
}


void
CAntennaID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAntennaID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CAntennaID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

}




/*
*****************************************************************
**
** Parameter PeakRSSI
**
*****************************************************************
*/
  

const CTypeDescriptor
CPeakRSSI::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "PeakRSSI",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    6,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CPeakRSSI::s_apFieldDescriptorTable[] =
{
  
    &s_fdPeakRSSI,
    NULL
};



const CFieldDescriptor
CPeakRSSI::s_fdPeakRSSI =
{
    CFieldDescriptor::FT_S8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PeakRSSI",	// m_pName
    NULL	// m_pEnumTable
};
CPeakRSSI::CPeakRSSI (void)
{
    m_pType = &s_typeDescriptor;
  
    m_PeakRSSI = 0;
}

CPeakRSSI::~CPeakRSSI (void)
{
}


CElement *
CPeakRSSI::s_construct (void)
{
    return (CElement *) new CPeakRSSI();
}


void
CPeakRSSI::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CPeakRSSI * pTarget = (CPeakRSSI *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_PeakRSSI = pDecoderStream->get_s8(&s_fdPeakRSSI);
    }
    else
    {
        pDecoderStream->get_s8(&s_fdPeakRSSI);
    }
    
}


void
CPeakRSSI::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CPeakRSSI::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CPeakRSSI::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_s8(m_PeakRSSI, &s_fdPeakRSSI);

}




/*
*****************************************************************
**
** Parameter ChannelIndex
**
*****************************************************************
*/
  

const CTypeDescriptor
CChannelIndex::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ChannelIndex",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    7,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CChannelIndex::s_apFieldDescriptorTable[] =
{
  
    &s_fdChannelIndex,
    NULL
};



const CFieldDescriptor
CChannelIndex::s_fdChannelIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ChannelIndex",	// m_pName
    NULL	// m_pEnumTable
};
CChannelIndex::CChannelIndex (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ChannelIndex = 0;
}

CChannelIndex::~CChannelIndex (void)
{
}


CElement *
CChannelIndex::s_construct (void)
{
    return (CElement *) new CChannelIndex();
}


void
CChannelIndex::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CChannelIndex * pTarget = (CChannelIndex *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ChannelIndex = pDecoderStream->get_u16(&s_fdChannelIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdChannelIndex);
    }
    
}


void
CChannelIndex::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CChannelIndex::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CChannelIndex::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_ChannelIndex, &s_fdChannelIndex);

}




/*
*****************************************************************
**
** Parameter FirstSeenTimestampUTC
**
*****************************************************************
*/
  

const CTypeDescriptor
CFirstSeenTimestampUTC::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FirstSeenTimestampUTC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    2,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFirstSeenTimestampUTC::s_apFieldDescriptorTable[] =
{
  
    &s_fdMicroseconds,
    NULL
};



const CFieldDescriptor
CFirstSeenTimestampUTC::s_fdMicroseconds =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_DATETIME,	// m_eFieldFormat
    "Microseconds",	// m_pName
    NULL	// m_pEnumTable
};
CFirstSeenTimestampUTC::CFirstSeenTimestampUTC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Microseconds = 0;
}

CFirstSeenTimestampUTC::~CFirstSeenTimestampUTC (void)
{
}


CElement *
CFirstSeenTimestampUTC::s_construct (void)
{
    return (CElement *) new CFirstSeenTimestampUTC();
}


void
CFirstSeenTimestampUTC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFirstSeenTimestampUTC * pTarget = (CFirstSeenTimestampUTC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Microseconds = pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    
}


void
CFirstSeenTimestampUTC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFirstSeenTimestampUTC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CFirstSeenTimestampUTC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_Microseconds, &s_fdMicroseconds);

}




/*
*****************************************************************
**
** Parameter FirstSeenTimestampUptime
**
*****************************************************************
*/
  

const CTypeDescriptor
CFirstSeenTimestampUptime::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FirstSeenTimestampUptime",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    3,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFirstSeenTimestampUptime::s_apFieldDescriptorTable[] =
{
  
    &s_fdMicroseconds,
    NULL
};



const CFieldDescriptor
CFirstSeenTimestampUptime::s_fdMicroseconds =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Microseconds",	// m_pName
    NULL	// m_pEnumTable
};
CFirstSeenTimestampUptime::CFirstSeenTimestampUptime (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Microseconds = 0;
}

CFirstSeenTimestampUptime::~CFirstSeenTimestampUptime (void)
{
}


CElement *
CFirstSeenTimestampUptime::s_construct (void)
{
    return (CElement *) new CFirstSeenTimestampUptime();
}


void
CFirstSeenTimestampUptime::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFirstSeenTimestampUptime * pTarget = (CFirstSeenTimestampUptime *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Microseconds = pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    
}


void
CFirstSeenTimestampUptime::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFirstSeenTimestampUptime::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CFirstSeenTimestampUptime::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_Microseconds, &s_fdMicroseconds);

}




/*
*****************************************************************
**
** Parameter LastSeenTimestampUTC
**
*****************************************************************
*/
  

const CTypeDescriptor
CLastSeenTimestampUTC::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "LastSeenTimestampUTC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    4,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CLastSeenTimestampUTC::s_apFieldDescriptorTable[] =
{
  
    &s_fdMicroseconds,
    NULL
};



const CFieldDescriptor
CLastSeenTimestampUTC::s_fdMicroseconds =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_DATETIME,	// m_eFieldFormat
    "Microseconds",	// m_pName
    NULL	// m_pEnumTable
};
CLastSeenTimestampUTC::CLastSeenTimestampUTC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Microseconds = 0;
}

CLastSeenTimestampUTC::~CLastSeenTimestampUTC (void)
{
}


CElement *
CLastSeenTimestampUTC::s_construct (void)
{
    return (CElement *) new CLastSeenTimestampUTC();
}


void
CLastSeenTimestampUTC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CLastSeenTimestampUTC * pTarget = (CLastSeenTimestampUTC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Microseconds = pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    
}


void
CLastSeenTimestampUTC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CLastSeenTimestampUTC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CLastSeenTimestampUTC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_Microseconds, &s_fdMicroseconds);

}




/*
*****************************************************************
**
** Parameter LastSeenTimestampUptime
**
*****************************************************************
*/
  

const CTypeDescriptor
CLastSeenTimestampUptime::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "LastSeenTimestampUptime",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    5,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CLastSeenTimestampUptime::s_apFieldDescriptorTable[] =
{
  
    &s_fdMicroseconds,
    NULL
};



const CFieldDescriptor
CLastSeenTimestampUptime::s_fdMicroseconds =
{
    CFieldDescriptor::FT_U64,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Microseconds",	// m_pName
    NULL	// m_pEnumTable
};
CLastSeenTimestampUptime::CLastSeenTimestampUptime (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Microseconds = 0;
}

CLastSeenTimestampUptime::~CLastSeenTimestampUptime (void)
{
}


CElement *
CLastSeenTimestampUptime::s_construct (void)
{
    return (CElement *) new CLastSeenTimestampUptime();
}


void
CLastSeenTimestampUptime::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CLastSeenTimestampUptime * pTarget = (CLastSeenTimestampUptime *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Microseconds = pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    else
    {
        pDecoderStream->get_u64(&s_fdMicroseconds);
    }
    
}


void
CLastSeenTimestampUptime::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CLastSeenTimestampUptime::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CLastSeenTimestampUptime::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u64(m_Microseconds, &s_fdMicroseconds);

}




/*
*****************************************************************
**
** Parameter TagSeenCount
**
*****************************************************************
*/
  

const CTypeDescriptor
CTagSeenCount::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "TagSeenCount",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    8,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CTagSeenCount::s_apFieldDescriptorTable[] =
{
  
    &s_fdTagCount,
    NULL
};



const CFieldDescriptor
CTagSeenCount::s_fdTagCount =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TagCount",	// m_pName
    NULL	// m_pEnumTable
};
CTagSeenCount::CTagSeenCount (void)
{
    m_pType = &s_typeDescriptor;
  
    m_TagCount = 0;
}

CTagSeenCount::~CTagSeenCount (void)
{
}


CElement *
CTagSeenCount::s_construct (void)
{
    return (CElement *) new CTagSeenCount();
}


void
CTagSeenCount::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CTagSeenCount * pTarget = (CTagSeenCount *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_TagCount = pDecoderStream->get_u16(&s_fdTagCount);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdTagCount);
    }
    
}


void
CTagSeenCount::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CTagSeenCount::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CTagSeenCount::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_TagCount, &s_fdTagCount);

}




/*
*****************************************************************
**
** Parameter AccessSpecID
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessSpecID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessSpecID",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    16,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAccessSpecID::s_apFieldDescriptorTable[] =
{
  
    &s_fdAccessSpecID,
    NULL
};



const CFieldDescriptor
CAccessSpecID::s_fdAccessSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CAccessSpecID::CAccessSpecID (void)
{
    m_pType = &s_typeDescriptor;
  
    m_AccessSpecID = 0;
}

CAccessSpecID::~CAccessSpecID (void)
{
}


CElement *
CAccessSpecID::s_construct (void)
{
    return (CElement *) new CAccessSpecID();
}


void
CAccessSpecID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAccessSpecID * pTarget = (CAccessSpecID *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_AccessSpecID = pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdAccessSpecID);
    }
    
}


void
CAccessSpecID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAccessSpecID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CAccessSpecID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_AccessSpecID, &s_fdAccessSpecID);

}




/*
*****************************************************************
**
** Parameter RFSurveyReportData
**
*****************************************************************
*/
  

const CTypeDescriptor
CRFSurveyReportData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RFSurveyReportData",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    242,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRFSurveyReportData::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CRFSurveyReportData::CRFSurveyReportData (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pROSpecID = NULL;
    m_pSpecIndex = NULL;
}

CRFSurveyReportData::~CRFSurveyReportData (void)
{
}


CElement *
CRFSurveyReportData::s_construct (void)
{
    return (CElement *) new CRFSurveyReportData();
}


void
CRFSurveyReportData::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRFSurveyReportData * pTarget = (CRFSurveyReportData *) pTargetElement;

  
}


void
CRFSurveyReportData::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRFSurveyReportData::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ROSpecID
    pType = &CROSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROSpecID = (CROSpecID *)*Cur++;
    }
    

    // 0-1 of SpecIndex
    pType = &CSpecIndex::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pSpecIndex = (CSpecIndex *)*Cur++;
    }
    

    // 1-N of FrequencyRSSILevelEntry
    pType = &CFrequencyRSSILevelEntry::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listFrequencyRSSILevelEntry.push_back((CFrequencyRSSILevelEntry *)*Cur);
        Cur++;
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
CRFSurveyReportData::setROSpecID (
  CROSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pROSpecID);
    delete m_pROSpecID;
    m_pROSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRFSurveyReportData::setSpecIndex (
  CSpecIndex *     pValue)
{
    removeSubParameterFromAllList(m_pSpecIndex);
    delete m_pSpecIndex;
    m_pSpecIndex = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRFSurveyReportData::addFrequencyRSSILevelEntry (
  CFrequencyRSSILevelEntry *     pValue)
{
    m_listFrequencyRSSILevelEntry.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CRFSurveyReportData::addCustom (
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
CRFSurveyReportData::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CROSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROSpecID, pType);
      
    pType = &CSpecIndex::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pSpecIndex, pType);
      
    pType = &CFrequencyRSSILevelEntry::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listFrequencyRSSILevelEntry, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter FrequencyRSSILevelEntry
**
*****************************************************************
*/
  

const CTypeDescriptor
CFrequencyRSSILevelEntry::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FrequencyRSSILevelEntry",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    243,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFrequencyRSSILevelEntry::s_apFieldDescriptorTable[] =
{
  
    &s_fdFrequency,
    &s_fdBandwidth,
    &s_fdAverageRSSI,
    &s_fdPeakRSSI,
    NULL
};



const CFieldDescriptor
CFrequencyRSSILevelEntry::s_fdFrequency =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Frequency",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CFrequencyRSSILevelEntry::s_fdBandwidth =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Bandwidth",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CFrequencyRSSILevelEntry::s_fdAverageRSSI =
{
    CFieldDescriptor::FT_S8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AverageRSSI",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CFrequencyRSSILevelEntry::s_fdPeakRSSI =
{
    CFieldDescriptor::FT_S8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PeakRSSI",	// m_pName
    NULL	// m_pEnumTable
};
CFrequencyRSSILevelEntry::CFrequencyRSSILevelEntry (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Frequency = 0;
    m_Bandwidth = 0;
    m_AverageRSSI = 0;
    m_PeakRSSI = 0;
    m_pTimestamp = NULL;
}

CFrequencyRSSILevelEntry::~CFrequencyRSSILevelEntry (void)
{
}


CElement *
CFrequencyRSSILevelEntry::s_construct (void)
{
    return (CElement *) new CFrequencyRSSILevelEntry();
}


void
CFrequencyRSSILevelEntry::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFrequencyRSSILevelEntry * pTarget = (CFrequencyRSSILevelEntry *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Frequency = pDecoderStream->get_u32(&s_fdFrequency);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdFrequency);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Bandwidth = pDecoderStream->get_u32(&s_fdBandwidth);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdBandwidth);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_AverageRSSI = pDecoderStream->get_s8(&s_fdAverageRSSI);
    }
    else
    {
        pDecoderStream->get_s8(&s_fdAverageRSSI);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_PeakRSSI = pDecoderStream->get_s8(&s_fdPeakRSSI);
    }
    else
    {
        pDecoderStream->get_s8(&s_fdPeakRSSI);
    }
    
}


void
CFrequencyRSSILevelEntry::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFrequencyRSSILevelEntry::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of choice Timestamp
    pType = NULL;
  
    if(Cur == End || !CTimestamp::isMember(*Cur))
    {
        goto missing;
    }
    m_pTimestamp = *Cur++;
    

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


EResultCode
CFrequencyRSSILevelEntry::setTimestamp (
  CParameter *                  pValue)
{
    if(!CTimestamp::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    removeSubParameterFromAllList(m_pTimestamp);
    delete m_pTimestamp;
    m_pTimestamp = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CFrequencyRSSILevelEntry::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_Frequency, &s_fdFrequency);

    pEncoderStream->put_u32(m_Bandwidth, &s_fdBandwidth);

    pEncoderStream->put_s8(m_AverageRSSI, &s_fdAverageRSSI);

    pEncoderStream->put_s8(m_PeakRSSI, &s_fdPeakRSSI);

    pType = NULL;
      
    pEncoderStream->putRequiredSubParameter(m_pTimestamp, pType);
      
}




/*
*****************************************************************
**
** Parameter ReaderEventNotificationSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CReaderEventNotificationSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ReaderEventNotificationSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    244,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CReaderEventNotificationSpec::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CReaderEventNotificationSpec::CReaderEventNotificationSpec (void)
{
    m_pType = &s_typeDescriptor;
  
}

CReaderEventNotificationSpec::~CReaderEventNotificationSpec (void)
{
}


CElement *
CReaderEventNotificationSpec::s_construct (void)
{
    return (CElement *) new CReaderEventNotificationSpec();
}


void
CReaderEventNotificationSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CReaderEventNotificationSpec * pTarget = (CReaderEventNotificationSpec *) pTargetElement;

  
}


void
CReaderEventNotificationSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CReaderEventNotificationSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1-N of EventNotificationState
    pType = &CEventNotificationState::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listEventNotificationState.push_back((CEventNotificationState *)*Cur);
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
CReaderEventNotificationSpec::addEventNotificationState (
  CEventNotificationState *     pValue)
{
    m_listEventNotificationState.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CReaderEventNotificationSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CEventNotificationState::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listEventNotificationState, pType);
      
}




/*
*****************************************************************
**
** Parameter EventNotificationState
**
*****************************************************************
*/
  

const CTypeDescriptor
CEventNotificationState::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "EventNotificationState",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    245,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CEventNotificationState::s_apFieldDescriptorTable[] =
{
  
    &s_fdEventType,
    &s_fdNotificationState,
    NULL
};



const CFieldDescriptor
CEventNotificationState::s_fdEventType =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EventType",	// m_pName
    g_estNotificationEventType	// m_pEnumTable
};


const CFieldDescriptor
CEventNotificationState::s_fdNotificationState =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NotificationState",	// m_pName
    NULL	// m_pEnumTable
};
CEventNotificationState::CEventNotificationState (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eEventType = (ENotificationEventType) 0;
    m_NotificationState = 0;
}

CEventNotificationState::~CEventNotificationState (void)
{
}


CElement *
CEventNotificationState::s_construct (void)
{
    return (CElement *) new CEventNotificationState();
}


void
CEventNotificationState::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CEventNotificationState * pTarget = (CEventNotificationState *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eEventType = (ENotificationEventType) pDecoderStream->get_e16(&s_fdEventType);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdEventType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_NotificationState = pDecoderStream->get_u1(&s_fdNotificationState);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdNotificationState);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CEventNotificationState::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CEventNotificationState::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CEventNotificationState::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eEventType, &s_fdEventType);

    pEncoderStream->put_u1(m_NotificationState, &s_fdNotificationState);

    pEncoderStream->put_reserved(7);

}




/*
*****************************************************************
**
** Parameter ReaderEventNotificationData
**
*****************************************************************
*/
  

const CTypeDescriptor
CReaderEventNotificationData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ReaderEventNotificationData",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    246,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CReaderEventNotificationData::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CReaderEventNotificationData::CReaderEventNotificationData (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pTimestamp = NULL;
    m_pHoppingEvent = NULL;
    m_pGPIEvent = NULL;
    m_pROSpecEvent = NULL;
    m_pReportBufferLevelWarningEvent = NULL;
    m_pReportBufferOverflowErrorEvent = NULL;
    m_pReaderExceptionEvent = NULL;
    m_pRFSurveyEvent = NULL;
    m_pAISpecEvent = NULL;
    m_pAntennaEvent = NULL;
    m_pConnectionAttemptEvent = NULL;
    m_pConnectionCloseEvent = NULL;
}

CReaderEventNotificationData::~CReaderEventNotificationData (void)
{
}


CElement *
CReaderEventNotificationData::s_construct (void)
{
    return (CElement *) new CReaderEventNotificationData();
}


void
CReaderEventNotificationData::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CReaderEventNotificationData * pTarget = (CReaderEventNotificationData *) pTargetElement;

  
}


void
CReaderEventNotificationData::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CReaderEventNotificationData::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of choice Timestamp
    pType = NULL;
  
    if(Cur == End || !CTimestamp::isMember(*Cur))
    {
        goto missing;
    }
    m_pTimestamp = *Cur++;
    

    // 0-1 of HoppingEvent
    pType = &CHoppingEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pHoppingEvent = (CHoppingEvent *)*Cur++;
    }
    

    // 0-1 of GPIEvent
    pType = &CGPIEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pGPIEvent = (CGPIEvent *)*Cur++;
    }
    

    // 0-1 of ROSpecEvent
    pType = &CROSpecEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROSpecEvent = (CROSpecEvent *)*Cur++;
    }
    

    // 0-1 of ReportBufferLevelWarningEvent
    pType = &CReportBufferLevelWarningEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pReportBufferLevelWarningEvent = (CReportBufferLevelWarningEvent *)*Cur++;
    }
    

    // 0-1 of ReportBufferOverflowErrorEvent
    pType = &CReportBufferOverflowErrorEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pReportBufferOverflowErrorEvent = (CReportBufferOverflowErrorEvent *)*Cur++;
    }
    

    // 0-1 of ReaderExceptionEvent
    pType = &CReaderExceptionEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pReaderExceptionEvent = (CReaderExceptionEvent *)*Cur++;
    }
    

    // 0-1 of RFSurveyEvent
    pType = &CRFSurveyEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pRFSurveyEvent = (CRFSurveyEvent *)*Cur++;
    }
    

    // 0-1 of AISpecEvent
    pType = &CAISpecEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAISpecEvent = (CAISpecEvent *)*Cur++;
    }
    

    // 0-1 of AntennaEvent
    pType = &CAntennaEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAntennaEvent = (CAntennaEvent *)*Cur++;
    }
    

    // 0-1 of ConnectionAttemptEvent
    pType = &CConnectionAttemptEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pConnectionAttemptEvent = (CConnectionAttemptEvent *)*Cur++;
    }
    

    // 0-1 of ConnectionCloseEvent
    pType = &CConnectionCloseEvent::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pConnectionCloseEvent = (CConnectionCloseEvent *)*Cur++;
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
CReaderEventNotificationData::setTimestamp (
  CParameter *                  pValue)
{
    if(!CTimestamp::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    removeSubParameterFromAllList(m_pTimestamp);
    delete m_pTimestamp;
    m_pTimestamp = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setHoppingEvent (
  CHoppingEvent *     pValue)
{
    removeSubParameterFromAllList(m_pHoppingEvent);
    delete m_pHoppingEvent;
    m_pHoppingEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setGPIEvent (
  CGPIEvent *     pValue)
{
    removeSubParameterFromAllList(m_pGPIEvent);
    delete m_pGPIEvent;
    m_pGPIEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setROSpecEvent (
  CROSpecEvent *     pValue)
{
    removeSubParameterFromAllList(m_pROSpecEvent);
    delete m_pROSpecEvent;
    m_pROSpecEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setReportBufferLevelWarningEvent (
  CReportBufferLevelWarningEvent *     pValue)
{
    removeSubParameterFromAllList(m_pReportBufferLevelWarningEvent);
    delete m_pReportBufferLevelWarningEvent;
    m_pReportBufferLevelWarningEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setReportBufferOverflowErrorEvent (
  CReportBufferOverflowErrorEvent *     pValue)
{
    removeSubParameterFromAllList(m_pReportBufferOverflowErrorEvent);
    delete m_pReportBufferOverflowErrorEvent;
    m_pReportBufferOverflowErrorEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setReaderExceptionEvent (
  CReaderExceptionEvent *     pValue)
{
    removeSubParameterFromAllList(m_pReaderExceptionEvent);
    delete m_pReaderExceptionEvent;
    m_pReaderExceptionEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setRFSurveyEvent (
  CRFSurveyEvent *     pValue)
{
    removeSubParameterFromAllList(m_pRFSurveyEvent);
    delete m_pRFSurveyEvent;
    m_pRFSurveyEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setAISpecEvent (
  CAISpecEvent *     pValue)
{
    removeSubParameterFromAllList(m_pAISpecEvent);
    delete m_pAISpecEvent;
    m_pAISpecEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setAntennaEvent (
  CAntennaEvent *     pValue)
{
    removeSubParameterFromAllList(m_pAntennaEvent);
    delete m_pAntennaEvent;
    m_pAntennaEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setConnectionAttemptEvent (
  CConnectionAttemptEvent *     pValue)
{
    removeSubParameterFromAllList(m_pConnectionAttemptEvent);
    delete m_pConnectionAttemptEvent;
    m_pConnectionAttemptEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::setConnectionCloseEvent (
  CConnectionCloseEvent *     pValue)
{
    removeSubParameterFromAllList(m_pConnectionCloseEvent);
    delete m_pConnectionCloseEvent;
    m_pConnectionCloseEvent = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderEventNotificationData::addCustom (
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
CReaderEventNotificationData::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = NULL;
      
    pEncoderStream->putRequiredSubParameter(m_pTimestamp, pType);
      
    pType = &CHoppingEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pHoppingEvent, pType);
      
    pType = &CGPIEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pGPIEvent, pType);
      
    pType = &CROSpecEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROSpecEvent, pType);
      
    pType = &CReportBufferLevelWarningEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pReportBufferLevelWarningEvent, pType);
      
    pType = &CReportBufferOverflowErrorEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pReportBufferOverflowErrorEvent, pType);
      
    pType = &CReaderExceptionEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pReaderExceptionEvent, pType);
      
    pType = &CRFSurveyEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pRFSurveyEvent, pType);
      
    pType = &CAISpecEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAISpecEvent, pType);
      
    pType = &CAntennaEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAntennaEvent, pType);
      
    pType = &CConnectionAttemptEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pConnectionAttemptEvent, pType);
      
    pType = &CConnectionCloseEvent::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pConnectionCloseEvent, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter HoppingEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CHoppingEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "HoppingEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    247,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CHoppingEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdHopTableID,
    &s_fdNextChannelIndex,
    NULL
};



const CFieldDescriptor
CHoppingEvent::s_fdHopTableID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "HopTableID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CHoppingEvent::s_fdNextChannelIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NextChannelIndex",	// m_pName
    NULL	// m_pEnumTable
};
CHoppingEvent::CHoppingEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_HopTableID = 0;
    m_NextChannelIndex = 0;
}

CHoppingEvent::~CHoppingEvent (void)
{
}


CElement *
CHoppingEvent::s_construct (void)
{
    return (CElement *) new CHoppingEvent();
}


void
CHoppingEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CHoppingEvent * pTarget = (CHoppingEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_HopTableID = pDecoderStream->get_u16(&s_fdHopTableID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdHopTableID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_NextChannelIndex = pDecoderStream->get_u16(&s_fdNextChannelIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNextChannelIndex);
    }
    
}


void
CHoppingEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CHoppingEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CHoppingEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_HopTableID, &s_fdHopTableID);

    pEncoderStream->put_u16(m_NextChannelIndex, &s_fdNextChannelIndex);

}




/*
*****************************************************************
**
** Parameter GPIEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CGPIEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "GPIEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    248,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CGPIEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdGPIPortNumber,
    &s_fdGPIEvent,
    NULL
};



const CFieldDescriptor
CGPIEvent::s_fdGPIPortNumber =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIPortNumber",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CGPIEvent::s_fdGPIEvent =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "GPIEvent",	// m_pName
    NULL	// m_pEnumTable
};
CGPIEvent::CGPIEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_GPIPortNumber = 0;
    m_GPIEvent = 0;
}

CGPIEvent::~CGPIEvent (void)
{
}


CElement *
CGPIEvent::s_construct (void)
{
    return (CElement *) new CGPIEvent();
}


void
CGPIEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CGPIEvent * pTarget = (CGPIEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_GPIPortNumber = pDecoderStream->get_u16(&s_fdGPIPortNumber);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdGPIPortNumber);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_GPIEvent = pDecoderStream->get_u1(&s_fdGPIEvent);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdGPIEvent);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CGPIEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CGPIEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CGPIEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_GPIPortNumber, &s_fdGPIPortNumber);

    pEncoderStream->put_u1(m_GPIEvent, &s_fdGPIEvent);

    pEncoderStream->put_reserved(7);

}




/*
*****************************************************************
**
** Parameter ROSpecEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CROSpecEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ROSpecEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    249,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CROSpecEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdEventType,
    &s_fdROSpecID,
    &s_fdPreemptingROSpecID,
    NULL
};



const CFieldDescriptor
CROSpecEvent::s_fdEventType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EventType",	// m_pName
    g_estROSpecEventType	// m_pEnumTable
};


const CFieldDescriptor
CROSpecEvent::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CROSpecEvent::s_fdPreemptingROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PreemptingROSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CROSpecEvent::CROSpecEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eEventType = (EROSpecEventType) 0;
    m_ROSpecID = 0;
    m_PreemptingROSpecID = 0;
}

CROSpecEvent::~CROSpecEvent (void)
{
}


CElement *
CROSpecEvent::s_construct (void)
{
    return (CElement *) new CROSpecEvent();
}


void
CROSpecEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CROSpecEvent * pTarget = (CROSpecEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eEventType = (EROSpecEventType) pDecoderStream->get_e8(&s_fdEventType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdEventType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_PreemptingROSpecID = pDecoderStream->get_u32(&s_fdPreemptingROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdPreemptingROSpecID);
    }
    
}


void
CROSpecEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CROSpecEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CROSpecEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eEventType, &s_fdEventType);

    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

    pEncoderStream->put_u32(m_PreemptingROSpecID, &s_fdPreemptingROSpecID);

}




/*
*****************************************************************
**
** Parameter ReportBufferLevelWarningEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CReportBufferLevelWarningEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ReportBufferLevelWarningEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    250,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CReportBufferLevelWarningEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdReportBufferPercentageFull,
    NULL
};



const CFieldDescriptor
CReportBufferLevelWarningEvent::s_fdReportBufferPercentageFull =
{
    CFieldDescriptor::FT_U8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ReportBufferPercentageFull",	// m_pName
    NULL	// m_pEnumTable
};
CReportBufferLevelWarningEvent::CReportBufferLevelWarningEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ReportBufferPercentageFull = 0;
}

CReportBufferLevelWarningEvent::~CReportBufferLevelWarningEvent (void)
{
}


CElement *
CReportBufferLevelWarningEvent::s_construct (void)
{
    return (CElement *) new CReportBufferLevelWarningEvent();
}


void
CReportBufferLevelWarningEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CReportBufferLevelWarningEvent * pTarget = (CReportBufferLevelWarningEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ReportBufferPercentageFull = pDecoderStream->get_u8(&s_fdReportBufferPercentageFull);
    }
    else
    {
        pDecoderStream->get_u8(&s_fdReportBufferPercentageFull);
    }
    
}


void
CReportBufferLevelWarningEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CReportBufferLevelWarningEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CReportBufferLevelWarningEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u8(m_ReportBufferPercentageFull, &s_fdReportBufferPercentageFull);

}




/*
*****************************************************************
**
** Parameter ReportBufferOverflowErrorEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CReportBufferOverflowErrorEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ReportBufferOverflowErrorEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    251,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CReportBufferOverflowErrorEvent::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CReportBufferOverflowErrorEvent::CReportBufferOverflowErrorEvent (void)
{
    m_pType = &s_typeDescriptor;
  
}

CReportBufferOverflowErrorEvent::~CReportBufferOverflowErrorEvent (void)
{
}


CElement *
CReportBufferOverflowErrorEvent::s_construct (void)
{
    return (CElement *) new CReportBufferOverflowErrorEvent();
}


void
CReportBufferOverflowErrorEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CReportBufferOverflowErrorEvent * pTarget = (CReportBufferOverflowErrorEvent *) pTargetElement;

  
}


void
CReportBufferOverflowErrorEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CReportBufferOverflowErrorEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CReportBufferOverflowErrorEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Parameter ReaderExceptionEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CReaderExceptionEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ReaderExceptionEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    252,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CReaderExceptionEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdMessage,
    NULL
};



const CFieldDescriptor
CReaderExceptionEvent::s_fdMessage =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_UTF8,	// m_eFieldFormat
    "Message",	// m_pName
    NULL	// m_pEnumTable
};
CReaderExceptionEvent::CReaderExceptionEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_pROSpecID = NULL;
    m_pSpecIndex = NULL;
    m_pInventoryParameterSpecID = NULL;
    m_pAntennaID = NULL;
    m_pAccessSpecID = NULL;
    m_pOpSpecID = NULL;
}

CReaderExceptionEvent::~CReaderExceptionEvent (void)
{
}


CElement *
CReaderExceptionEvent::s_construct (void)
{
    return (CElement *) new CReaderExceptionEvent();
}


void
CReaderExceptionEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CReaderExceptionEvent * pTarget = (CReaderExceptionEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Message = pDecoderStream->get_utf8v(&s_fdMessage);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdMessage);
    }
    
}


void
CReaderExceptionEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CReaderExceptionEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of ROSpecID
    pType = &CROSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pROSpecID = (CROSpecID *)*Cur++;
    }
    

    // 0-1 of SpecIndex
    pType = &CSpecIndex::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pSpecIndex = (CSpecIndex *)*Cur++;
    }
    

    // 0-1 of InventoryParameterSpecID
    pType = &CInventoryParameterSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pInventoryParameterSpecID = (CInventoryParameterSpecID *)*Cur++;
    }
    

    // 0-1 of AntennaID
    pType = &CAntennaID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAntennaID = (CAntennaID *)*Cur++;
    }
    

    // 0-1 of AccessSpecID
    pType = &CAccessSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pAccessSpecID = (CAccessSpecID *)*Cur++;
    }
    

    // 0-1 of OpSpecID
    pType = &COpSpecID::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pOpSpecID = (COpSpecID *)*Cur++;
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
CReaderExceptionEvent::setROSpecID (
  CROSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pROSpecID);
    delete m_pROSpecID;
    m_pROSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderExceptionEvent::setSpecIndex (
  CSpecIndex *     pValue)
{
    removeSubParameterFromAllList(m_pSpecIndex);
    delete m_pSpecIndex;
    m_pSpecIndex = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderExceptionEvent::setInventoryParameterSpecID (
  CInventoryParameterSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pInventoryParameterSpecID);
    delete m_pInventoryParameterSpecID;
    m_pInventoryParameterSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderExceptionEvent::setAntennaID (
  CAntennaID *     pValue)
{
    removeSubParameterFromAllList(m_pAntennaID);
    delete m_pAntennaID;
    m_pAntennaID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderExceptionEvent::setAccessSpecID (
  CAccessSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pAccessSpecID);
    delete m_pAccessSpecID;
    m_pAccessSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderExceptionEvent::setOpSpecID (
  COpSpecID *     pValue)
{
    removeSubParameterFromAllList(m_pOpSpecID);
    delete m_pOpSpecID;
    m_pOpSpecID = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CReaderExceptionEvent::addCustom (
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
CReaderExceptionEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_utf8v(m_Message, &s_fdMessage);

    pType = &CROSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pROSpecID, pType);
      
    pType = &CSpecIndex::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pSpecIndex, pType);
      
    pType = &CInventoryParameterSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pInventoryParameterSpecID, pType);
      
    pType = &CAntennaID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAntennaID, pType);
      
    pType = &CAccessSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pAccessSpecID, pType);
      
    pType = &COpSpecID::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pOpSpecID, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter OpSpecID
**
*****************************************************************
*/
  

const CTypeDescriptor
COpSpecID::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "OpSpecID",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    17,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
COpSpecID::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    NULL
};



const CFieldDescriptor
COpSpecID::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};
COpSpecID::COpSpecID (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
}

COpSpecID::~COpSpecID (void)
{
}


CElement *
COpSpecID::s_construct (void)
{
    return (CElement *) new COpSpecID();
}


void
COpSpecID::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    COpSpecID * pTarget = (COpSpecID *) pTargetElement;

  
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
COpSpecID::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
COpSpecID::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
COpSpecID::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

}




/*
*****************************************************************
**
** Parameter RFSurveyEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CRFSurveyEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "RFSurveyEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    253,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CRFSurveyEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdEventType,
    &s_fdROSpecID,
    &s_fdSpecIndex,
    NULL
};



const CFieldDescriptor
CRFSurveyEvent::s_fdEventType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EventType",	// m_pName
    g_estRFSurveyEventType	// m_pEnumTable
};


const CFieldDescriptor
CRFSurveyEvent::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CRFSurveyEvent::s_fdSpecIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SpecIndex",	// m_pName
    NULL	// m_pEnumTable
};
CRFSurveyEvent::CRFSurveyEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eEventType = (ERFSurveyEventType) 0;
    m_ROSpecID = 0;
    m_SpecIndex = 0;
}

CRFSurveyEvent::~CRFSurveyEvent (void)
{
}


CElement *
CRFSurveyEvent::s_construct (void)
{
    return (CElement *) new CRFSurveyEvent();
}


void
CRFSurveyEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CRFSurveyEvent * pTarget = (CRFSurveyEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eEventType = (ERFSurveyEventType) pDecoderStream->get_e8(&s_fdEventType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdEventType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_SpecIndex = pDecoderStream->get_u16(&s_fdSpecIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdSpecIndex);
    }
    
}


void
CRFSurveyEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CRFSurveyEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CRFSurveyEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eEventType, &s_fdEventType);

    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

    pEncoderStream->put_u16(m_SpecIndex, &s_fdSpecIndex);

}




/*
*****************************************************************
**
** Parameter AISpecEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CAISpecEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AISpecEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    254,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAISpecEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdEventType,
    &s_fdROSpecID,
    &s_fdSpecIndex,
    NULL
};



const CFieldDescriptor
CAISpecEvent::s_fdEventType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EventType",	// m_pName
    g_estAISpecEventType	// m_pEnumTable
};


const CFieldDescriptor
CAISpecEvent::s_fdROSpecID =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ROSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CAISpecEvent::s_fdSpecIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SpecIndex",	// m_pName
    NULL	// m_pEnumTable
};
CAISpecEvent::CAISpecEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eEventType = (EAISpecEventType) 0;
    m_ROSpecID = 0;
    m_SpecIndex = 0;
    m_pAirProtocolSingulationDetails = NULL;
}

CAISpecEvent::~CAISpecEvent (void)
{
}


CElement *
CAISpecEvent::s_construct (void)
{
    return (CElement *) new CAISpecEvent();
}


void
CAISpecEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAISpecEvent * pTarget = (CAISpecEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eEventType = (EAISpecEventType) pDecoderStream->get_e8(&s_fdEventType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdEventType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_ROSpecID = pDecoderStream->get_u32(&s_fdROSpecID);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdROSpecID);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_SpecIndex = pDecoderStream->get_u16(&s_fdSpecIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdSpecIndex);
    }
    
}


void
CAISpecEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAISpecEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of choice AirProtocolSingulationDetails
    pType = NULL;
  
    if(Cur != End && CAirProtocolSingulationDetails::isMember(*Cur))
    {
        m_pAirProtocolSingulationDetails = *Cur++;
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
CAISpecEvent::setAirProtocolSingulationDetails (
  CParameter *                  pValue)
{
    if(!CAirProtocolSingulationDetails::isMember(pValue))
    {
        return RC_InvalidChoiceMember;
    }

    removeSubParameterFromAllList(m_pAirProtocolSingulationDetails);
    delete m_pAirProtocolSingulationDetails;
    m_pAirProtocolSingulationDetails = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CAISpecEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eEventType, &s_fdEventType);

    pEncoderStream->put_u32(m_ROSpecID, &s_fdROSpecID);

    pEncoderStream->put_u16(m_SpecIndex, &s_fdSpecIndex);

    pType = NULL;
      
    pEncoderStream->putOptionalSubParameter(m_pAirProtocolSingulationDetails, pType);
      
}




/*
*****************************************************************
**
** Parameter AntennaEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CAntennaEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AntennaEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    255,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CAntennaEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdEventType,
    &s_fdAntennaID,
    NULL
};



const CFieldDescriptor
CAntennaEvent::s_fdEventType =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EventType",	// m_pName
    g_estAntennaEventType	// m_pEnumTable
};


const CFieldDescriptor
CAntennaEvent::s_fdAntennaID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AntennaID",	// m_pName
    NULL	// m_pEnumTable
};
CAntennaEvent::CAntennaEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eEventType = (EAntennaEventType) 0;
    m_AntennaID = 0;
}

CAntennaEvent::~CAntennaEvent (void)
{
}


CElement *
CAntennaEvent::s_construct (void)
{
    return (CElement *) new CAntennaEvent();
}


void
CAntennaEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CAntennaEvent * pTarget = (CAntennaEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eEventType = (EAntennaEventType) pDecoderStream->get_e8(&s_fdEventType);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdEventType);
    }

    if(NULL != pTarget)
    {
        pTarget->m_AntennaID = pDecoderStream->get_u16(&s_fdAntennaID);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdAntennaID);
    }
    
}


void
CAntennaEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CAntennaEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CAntennaEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eEventType, &s_fdEventType);

    pEncoderStream->put_u16(m_AntennaID, &s_fdAntennaID);

}




/*
*****************************************************************
**
** Parameter ConnectionAttemptEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CConnectionAttemptEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ConnectionAttemptEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    256,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CConnectionAttemptEvent::s_apFieldDescriptorTable[] =
{
  
    &s_fdStatus,
    NULL
};



const CFieldDescriptor
CConnectionAttemptEvent::s_fdStatus =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Status",	// m_pName
    g_estConnectionAttemptStatusType	// m_pEnumTable
};
CConnectionAttemptEvent::CConnectionAttemptEvent (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eStatus = (EConnectionAttemptStatusType) 0;
}

CConnectionAttemptEvent::~CConnectionAttemptEvent (void)
{
}


CElement *
CConnectionAttemptEvent::s_construct (void)
{
    return (CElement *) new CConnectionAttemptEvent();
}


void
CConnectionAttemptEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CConnectionAttemptEvent * pTarget = (CConnectionAttemptEvent *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eStatus = (EConnectionAttemptStatusType) pDecoderStream->get_e16(&s_fdStatus);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdStatus);
    }

}


void
CConnectionAttemptEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CConnectionAttemptEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CConnectionAttemptEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eStatus, &s_fdStatus);

}




/*
*****************************************************************
**
** Parameter ConnectionCloseEvent
**
*****************************************************************
*/
  

const CTypeDescriptor
CConnectionCloseEvent::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ConnectionCloseEvent",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    257,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CConnectionCloseEvent::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CConnectionCloseEvent::CConnectionCloseEvent (void)
{
    m_pType = &s_typeDescriptor;
  
}

CConnectionCloseEvent::~CConnectionCloseEvent (void)
{
}


CElement *
CConnectionCloseEvent::s_construct (void)
{
    return (CElement *) new CConnectionCloseEvent();
}


void
CConnectionCloseEvent::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CConnectionCloseEvent * pTarget = (CConnectionCloseEvent *) pTargetElement;

  
}


void
CConnectionCloseEvent::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CConnectionCloseEvent::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CConnectionCloseEvent::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
}




/*
*****************************************************************
**
** Parameter LLRPStatus
**
*****************************************************************
*/
  

const CTypeDescriptor
CLLRPStatus::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "LLRPStatus",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    287,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CLLRPStatus::s_apFieldDescriptorTable[] =
{
  
    &s_fdStatusCode,
    &s_fdErrorDescription,
    NULL
};



const CFieldDescriptor
CLLRPStatus::s_fdStatusCode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "StatusCode",	// m_pName
    g_estStatusCode	// m_pEnumTable
};


const CFieldDescriptor
CLLRPStatus::s_fdErrorDescription =
{
    CFieldDescriptor::FT_UTF8V,	// m_eFieldType
    CFieldDescriptor::FMT_UTF8,	// m_eFieldFormat
    "ErrorDescription",	// m_pName
    NULL	// m_pEnumTable
};
CLLRPStatus::CLLRPStatus (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eStatusCode = (EStatusCode) 0;
    m_pFieldError = NULL;
    m_pParameterError = NULL;
}

CLLRPStatus::~CLLRPStatus (void)
{
}


CElement *
CLLRPStatus::s_construct (void)
{
    return (CElement *) new CLLRPStatus();
}


void
CLLRPStatus::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CLLRPStatus * pTarget = (CLLRPStatus *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eStatusCode = (EStatusCode) pDecoderStream->get_e16(&s_fdStatusCode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdStatusCode);
    }

    if(NULL != pTarget)
    {
        pTarget->m_ErrorDescription = pDecoderStream->get_utf8v(&s_fdErrorDescription);
    }
    else
    {
        pDecoderStream->get_utf8v(&s_fdErrorDescription);
    }
    
}


void
CLLRPStatus::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CLLRPStatus::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of FieldError
    pType = &CFieldError::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pFieldError = (CFieldError *)*Cur++;
    }
    

    // 0-1 of ParameterError
    pType = &CParameterError::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pParameterError = (CParameterError *)*Cur++;
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
CLLRPStatus::setFieldError (
  CFieldError *     pValue)
{
    removeSubParameterFromAllList(m_pFieldError);
    delete m_pFieldError;
    m_pFieldError = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CLLRPStatus::setParameterError (
  CParameterError *     pValue)
{
    removeSubParameterFromAllList(m_pParameterError);
    delete m_pParameterError;
    m_pParameterError = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CLLRPStatus::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e16((int)m_eStatusCode, &s_fdStatusCode);

    pEncoderStream->put_utf8v(m_ErrorDescription, &s_fdErrorDescription);

    pType = &CFieldError::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pFieldError, pType);
      
    pType = &CParameterError::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pParameterError, pType);
      
}




/*
*****************************************************************
**
** Parameter FieldError
**
*****************************************************************
*/
  

const CTypeDescriptor
CFieldError::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "FieldError",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    288,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CFieldError::s_apFieldDescriptorTable[] =
{
  
    &s_fdFieldNum,
    &s_fdErrorCode,
    NULL
};



const CFieldDescriptor
CFieldError::s_fdFieldNum =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "FieldNum",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CFieldError::s_fdErrorCode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ErrorCode",	// m_pName
    g_estStatusCode	// m_pEnumTable
};
CFieldError::CFieldError (void)
{
    m_pType = &s_typeDescriptor;
  
    m_FieldNum = 0;
    m_eErrorCode = (EStatusCode) 0;
}

CFieldError::~CFieldError (void)
{
}


CElement *
CFieldError::s_construct (void)
{
    return (CElement *) new CFieldError();
}


void
CFieldError::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CFieldError * pTarget = (CFieldError *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_FieldNum = pDecoderStream->get_u16(&s_fdFieldNum);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdFieldNum);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eErrorCode = (EStatusCode) pDecoderStream->get_e16(&s_fdErrorCode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdErrorCode);
    }

}


void
CFieldError::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CFieldError::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CFieldError::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_FieldNum, &s_fdFieldNum);

    pEncoderStream->put_e16((int)m_eErrorCode, &s_fdErrorCode);

}




/*
*****************************************************************
**
** Parameter ParameterError
**
*****************************************************************
*/
  

const CTypeDescriptor
CParameterError::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "ParameterError",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    289,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CParameterError::s_apFieldDescriptorTable[] =
{
  
    &s_fdParameterType,
    &s_fdErrorCode,
    NULL
};



const CFieldDescriptor
CParameterError::s_fdParameterType =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ParameterType",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CParameterError::s_fdErrorCode =
{
    CFieldDescriptor::FT_E16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ErrorCode",	// m_pName
    g_estStatusCode	// m_pEnumTable
};
CParameterError::CParameterError (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ParameterType = 0;
    m_eErrorCode = (EStatusCode) 0;
    m_pFieldError = NULL;
    m_pParameterError = NULL;
}

CParameterError::~CParameterError (void)
{
}


CElement *
CParameterError::s_construct (void)
{
    return (CElement *) new CParameterError();
}


void
CParameterError::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CParameterError * pTarget = (CParameterError *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ParameterType = pDecoderStream->get_u16(&s_fdParameterType);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdParameterType);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eErrorCode = (EStatusCode) pDecoderStream->get_e16(&s_fdErrorCode);
    }
    else
    {
        pDecoderStream->get_e16(&s_fdErrorCode);
    }

}


void
CParameterError::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CParameterError::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of FieldError
    pType = &CFieldError::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pFieldError = (CFieldError *)*Cur++;
    }
    

    // 0-1 of ParameterError
    pType = &CParameterError::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pParameterError = (CParameterError *)*Cur++;
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
CParameterError::setFieldError (
  CFieldError *     pValue)
{
    removeSubParameterFromAllList(m_pFieldError);
    delete m_pFieldError;
    m_pFieldError = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CParameterError::setParameterError (
  CParameterError *     pValue)
{
    removeSubParameterFromAllList(m_pParameterError);
    delete m_pParameterError;
    m_pParameterError = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CParameterError::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_ParameterType, &s_fdParameterType);

    pEncoderStream->put_e16((int)m_eErrorCode, &s_fdErrorCode);

    pType = &CFieldError::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pFieldError, pType);
      
    pType = &CParameterError::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pParameterError, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2LLRPCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2LLRPCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2LLRPCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    327,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2LLRPCapabilities::s_apFieldDescriptorTable[] =
{
  
    &s_fdCanSupportBlockErase,
    &s_fdCanSupportBlockWrite,
    &s_fdMaxNumSelectFiltersPerQuery,
    NULL
};



const CFieldDescriptor
CC1G2LLRPCapabilities::s_fdCanSupportBlockErase =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CanSupportBlockErase",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2LLRPCapabilities::s_fdCanSupportBlockWrite =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CanSupportBlockWrite",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2LLRPCapabilities::s_fdMaxNumSelectFiltersPerQuery =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxNumSelectFiltersPerQuery",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2LLRPCapabilities::CC1G2LLRPCapabilities (void)
{
    m_pType = &s_typeDescriptor;
  
    m_CanSupportBlockErase = 0;
    m_CanSupportBlockWrite = 0;
    m_MaxNumSelectFiltersPerQuery = 0;
}

CC1G2LLRPCapabilities::~CC1G2LLRPCapabilities (void)
{
}


CElement *
CC1G2LLRPCapabilities::s_construct (void)
{
    return (CElement *) new CC1G2LLRPCapabilities();
}


void
CC1G2LLRPCapabilities::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2LLRPCapabilities * pTarget = (CC1G2LLRPCapabilities *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_CanSupportBlockErase = pDecoderStream->get_u1(&s_fdCanSupportBlockErase);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdCanSupportBlockErase);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_CanSupportBlockWrite = pDecoderStream->get_u1(&s_fdCanSupportBlockWrite);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdCanSupportBlockWrite);
    }
    
    pDecoderStream->get_reserved(6);

    if(NULL != pTarget)
    {
        pTarget->m_MaxNumSelectFiltersPerQuery = pDecoderStream->get_u16(&s_fdMaxNumSelectFiltersPerQuery);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdMaxNumSelectFiltersPerQuery);
    }
    
}


void
CC1G2LLRPCapabilities::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2LLRPCapabilities::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2LLRPCapabilities::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_CanSupportBlockErase, &s_fdCanSupportBlockErase);

    pEncoderStream->put_u1(m_CanSupportBlockWrite, &s_fdCanSupportBlockWrite);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_MaxNumSelectFiltersPerQuery, &s_fdMaxNumSelectFiltersPerQuery);

}




/*
*****************************************************************
**
** Parameter C1G2UHFRFModeTable
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2UHFRFModeTable::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2UHFRFModeTable",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    328,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2UHFRFModeTable::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CC1G2UHFRFModeTable::CC1G2UHFRFModeTable (void)
{
    m_pType = &s_typeDescriptor;
  
}

CC1G2UHFRFModeTable::~CC1G2UHFRFModeTable (void)
{
}


CElement *
CC1G2UHFRFModeTable::s_construct (void)
{
    return (CElement *) new CC1G2UHFRFModeTable();
}


void
CC1G2UHFRFModeTable::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2UHFRFModeTable * pTarget = (CC1G2UHFRFModeTable *) pTargetElement;

  
}


void
CC1G2UHFRFModeTable::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2UHFRFModeTable::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1-N of C1G2UHFRFModeTableEntry
    pType = &CC1G2UHFRFModeTableEntry::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listC1G2UHFRFModeTableEntry.push_back((CC1G2UHFRFModeTableEntry *)*Cur);
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
CC1G2UHFRFModeTable::addC1G2UHFRFModeTableEntry (
  CC1G2UHFRFModeTableEntry *     pValue)
{
    m_listC1G2UHFRFModeTableEntry.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CC1G2UHFRFModeTable::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CC1G2UHFRFModeTableEntry::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listC1G2UHFRFModeTableEntry, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2UHFRFModeTableEntry
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2UHFRFModeTableEntry::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2UHFRFModeTableEntry",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    329,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2UHFRFModeTableEntry::s_apFieldDescriptorTable[] =
{
  
    &s_fdModeIdentifier,
    &s_fdDRValue,
    &s_fdEPCHAGTCConformance,
    &s_fdMValue,
    &s_fdForwardLinkModulation,
    &s_fdSpectralMaskIndicator,
    &s_fdBDRValue,
    &s_fdPIEValue,
    &s_fdMinTariValue,
    &s_fdMaxTariValue,
    &s_fdStepTariValue,
    NULL
};



const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdModeIdentifier =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ModeIdentifier",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdDRValue =
{
    CFieldDescriptor::FT_E1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DRValue",	// m_pName
    g_estC1G2DRValue	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdEPCHAGTCConformance =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EPCHAGTCConformance",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdMValue =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MValue",	// m_pName
    g_estC1G2MValue	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdForwardLinkModulation =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ForwardLinkModulation",	// m_pName
    g_estC1G2ForwardLinkModulation	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdSpectralMaskIndicator =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "SpectralMaskIndicator",	// m_pName
    g_estC1G2SpectralMaskIndicator	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdBDRValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "BDRValue",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdPIEValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PIEValue",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdMinTariValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MinTariValue",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdMaxTariValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MaxTariValue",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2UHFRFModeTableEntry::s_fdStepTariValue =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "StepTariValue",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2UHFRFModeTableEntry::CC1G2UHFRFModeTableEntry (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ModeIdentifier = 0;
    m_eDRValue = (EC1G2DRValue) 0;
    m_EPCHAGTCConformance = 0;
    m_eMValue = (EC1G2MValue) 0;
    m_eForwardLinkModulation = (EC1G2ForwardLinkModulation) 0;
    m_eSpectralMaskIndicator = (EC1G2SpectralMaskIndicator) 0;
    m_BDRValue = 0;
    m_PIEValue = 0;
    m_MinTariValue = 0;
    m_MaxTariValue = 0;
    m_StepTariValue = 0;
}

CC1G2UHFRFModeTableEntry::~CC1G2UHFRFModeTableEntry (void)
{
}


CElement *
CC1G2UHFRFModeTableEntry::s_construct (void)
{
    return (CElement *) new CC1G2UHFRFModeTableEntry();
}


void
CC1G2UHFRFModeTableEntry::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2UHFRFModeTableEntry * pTarget = (CC1G2UHFRFModeTableEntry *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ModeIdentifier = pDecoderStream->get_u32(&s_fdModeIdentifier);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdModeIdentifier);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_eDRValue = (EC1G2DRValue) pDecoderStream->get_e1(&s_fdDRValue);
    }
    else
    {
        pDecoderStream->get_e1(&s_fdDRValue);
    }

    if(NULL != pTarget)
    {
        pTarget->m_EPCHAGTCConformance = pDecoderStream->get_u1(&s_fdEPCHAGTCConformance);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEPCHAGTCConformance);
    }
    
    pDecoderStream->get_reserved(6);

    if(NULL != pTarget)
    {
        pTarget->m_eMValue = (EC1G2MValue) pDecoderStream->get_e8(&s_fdMValue);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdMValue);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eForwardLinkModulation = (EC1G2ForwardLinkModulation) pDecoderStream->get_e8(&s_fdForwardLinkModulation);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdForwardLinkModulation);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eSpectralMaskIndicator = (EC1G2SpectralMaskIndicator) pDecoderStream->get_e8(&s_fdSpectralMaskIndicator);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdSpectralMaskIndicator);
    }

    if(NULL != pTarget)
    {
        pTarget->m_BDRValue = pDecoderStream->get_u32(&s_fdBDRValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdBDRValue);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_PIEValue = pDecoderStream->get_u32(&s_fdPIEValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdPIEValue);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MinTariValue = pDecoderStream->get_u32(&s_fdMinTariValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMinTariValue);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_MaxTariValue = pDecoderStream->get_u32(&s_fdMaxTariValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdMaxTariValue);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_StepTariValue = pDecoderStream->get_u32(&s_fdStepTariValue);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdStepTariValue);
    }
    
}


void
CC1G2UHFRFModeTableEntry::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2UHFRFModeTableEntry::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2UHFRFModeTableEntry::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u32(m_ModeIdentifier, &s_fdModeIdentifier);

    pEncoderStream->put_e1((int)m_eDRValue, &s_fdDRValue);

    pEncoderStream->put_u1(m_EPCHAGTCConformance, &s_fdEPCHAGTCConformance);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_e8((int)m_eMValue, &s_fdMValue);

    pEncoderStream->put_e8((int)m_eForwardLinkModulation, &s_fdForwardLinkModulation);

    pEncoderStream->put_e8((int)m_eSpectralMaskIndicator, &s_fdSpectralMaskIndicator);

    pEncoderStream->put_u32(m_BDRValue, &s_fdBDRValue);

    pEncoderStream->put_u32(m_PIEValue, &s_fdPIEValue);

    pEncoderStream->put_u32(m_MinTariValue, &s_fdMinTariValue);

    pEncoderStream->put_u32(m_MaxTariValue, &s_fdMaxTariValue);

    pEncoderStream->put_u32(m_StepTariValue, &s_fdStepTariValue);

}




/*
*****************************************************************
**
** Parameter C1G2InventoryCommand
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2InventoryCommand::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2InventoryCommand",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    330,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2InventoryCommand::s_apFieldDescriptorTable[] =
{
  
    &s_fdTagInventoryStateAware,
    NULL
};



const CFieldDescriptor
CC1G2InventoryCommand::s_fdTagInventoryStateAware =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TagInventoryStateAware",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2InventoryCommand::CC1G2InventoryCommand (void)
{
    m_pType = &s_typeDescriptor;
  
    m_TagInventoryStateAware = 0;
    m_pC1G2RFControl = NULL;
    m_pC1G2SingulationControl = NULL;
}

CC1G2InventoryCommand::~CC1G2InventoryCommand (void)
{
}


CElement *
CC1G2InventoryCommand::s_construct (void)
{
    return (CElement *) new CC1G2InventoryCommand();
}


void
CC1G2InventoryCommand::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2InventoryCommand * pTarget = (CC1G2InventoryCommand *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_TagInventoryStateAware = pDecoderStream->get_u1(&s_fdTagInventoryStateAware);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdTagInventoryStateAware);
    }
    
    pDecoderStream->get_reserved(7);

}


void
CC1G2InventoryCommand::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2InventoryCommand::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-N of C1G2Filter
    pType = &CC1G2Filter::s_typeDescriptor;
  
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listC1G2Filter.push_back((CC1G2Filter *)*Cur);
        Cur++;
    }
    

    // 0-1 of C1G2RFControl
    pType = &CC1G2RFControl::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pC1G2RFControl = (CC1G2RFControl *)*Cur++;
    }
    

    // 0-1 of C1G2SingulationControl
    pType = &CC1G2SingulationControl::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pC1G2SingulationControl = (CC1G2SingulationControl *)*Cur++;
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
CC1G2InventoryCommand::addC1G2Filter (
  CC1G2Filter *     pValue)
{
    m_listC1G2Filter.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CC1G2InventoryCommand::setC1G2RFControl (
  CC1G2RFControl *     pValue)
{
    removeSubParameterFromAllList(m_pC1G2RFControl);
    delete m_pC1G2RFControl;
    m_pC1G2RFControl = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CC1G2InventoryCommand::setC1G2SingulationControl (
  CC1G2SingulationControl *     pValue)
{
    removeSubParameterFromAllList(m_pC1G2SingulationControl);
    delete m_pC1G2SingulationControl;
    m_pC1G2SingulationControl = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CC1G2InventoryCommand::addCustom (
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
CC1G2InventoryCommand::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_TagInventoryStateAware, &s_fdTagInventoryStateAware);

    pEncoderStream->put_reserved(7);

    pType = &CC1G2Filter::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listC1G2Filter, pType);
      
    pType = &CC1G2RFControl::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pC1G2RFControl, pType);
      
    pType = &CC1G2SingulationControl::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pC1G2SingulationControl, pType);
      
    pType = &CCustom::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameterList((tListOfParameters *) &m_listCustom, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2Filter
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2Filter::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2Filter",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    331,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2Filter::s_apFieldDescriptorTable[] =
{
  
    &s_fdT,
    NULL
};



const CFieldDescriptor
CC1G2Filter::s_fdT =
{
    CFieldDescriptor::FT_E2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "T",	// m_pName
    g_estC1G2TruncateAction	// m_pEnumTable
};
CC1G2Filter::CC1G2Filter (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eT = (EC1G2TruncateAction) 0;
    m_pC1G2TagInventoryMask = NULL;
    m_pC1G2TagInventoryStateAwareFilterAction = NULL;
    m_pC1G2TagInventoryStateUnawareFilterAction = NULL;
}

CC1G2Filter::~CC1G2Filter (void)
{
}


CElement *
CC1G2Filter::s_construct (void)
{
    return (CElement *) new CC1G2Filter();
}


void
CC1G2Filter::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2Filter * pTarget = (CC1G2Filter *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eT = (EC1G2TruncateAction) pDecoderStream->get_e2(&s_fdT);
    }
    else
    {
        pDecoderStream->get_e2(&s_fdT);
    }

    pDecoderStream->get_reserved(6);

}


void
CC1G2Filter::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2Filter::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1 of C1G2TagInventoryMask
    pType = &CC1G2TagInventoryMask::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    m_pC1G2TagInventoryMask = (CC1G2TagInventoryMask *)*Cur++;
    

    // 0-1 of C1G2TagInventoryStateAwareFilterAction
    pType = &CC1G2TagInventoryStateAwareFilterAction::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pC1G2TagInventoryStateAwareFilterAction = (CC1G2TagInventoryStateAwareFilterAction *)*Cur++;
    }
    

    // 0-1 of C1G2TagInventoryStateUnawareFilterAction
    pType = &CC1G2TagInventoryStateUnawareFilterAction::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pC1G2TagInventoryStateUnawareFilterAction = (CC1G2TagInventoryStateUnawareFilterAction *)*Cur++;
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
CC1G2Filter::setC1G2TagInventoryMask (
  CC1G2TagInventoryMask *     pValue)
{
    removeSubParameterFromAllList(m_pC1G2TagInventoryMask);
    delete m_pC1G2TagInventoryMask;
    m_pC1G2TagInventoryMask = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CC1G2Filter::setC1G2TagInventoryStateAwareFilterAction (
  CC1G2TagInventoryStateAwareFilterAction *     pValue)
{
    removeSubParameterFromAllList(m_pC1G2TagInventoryStateAwareFilterAction);
    delete m_pC1G2TagInventoryStateAwareFilterAction;
    m_pC1G2TagInventoryStateAwareFilterAction = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

EResultCode
CC1G2Filter::setC1G2TagInventoryStateUnawareFilterAction (
  CC1G2TagInventoryStateUnawareFilterAction *     pValue)
{
    removeSubParameterFromAllList(m_pC1G2TagInventoryStateUnawareFilterAction);
    delete m_pC1G2TagInventoryStateUnawareFilterAction;
    m_pC1G2TagInventoryStateUnawareFilterAction = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CC1G2Filter::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e2((int)m_eT, &s_fdT);

    pEncoderStream->put_reserved(6);

    pType = &CC1G2TagInventoryMask::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameter(m_pC1G2TagInventoryMask, pType);
      
    pType = &CC1G2TagInventoryStateAwareFilterAction::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pC1G2TagInventoryStateAwareFilterAction, pType);
      
    pType = &CC1G2TagInventoryStateUnawareFilterAction::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pC1G2TagInventoryStateUnawareFilterAction, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2TagInventoryMask
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2TagInventoryMask::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2TagInventoryMask",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    332,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2TagInventoryMask::s_apFieldDescriptorTable[] =
{
  
    &s_fdMB,
    &s_fdPointer,
    &s_fdTagMask,
    NULL
};



const CFieldDescriptor
CC1G2TagInventoryMask::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TagInventoryMask::s_fdPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Pointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TagInventoryMask::s_fdTagMask =
{
    CFieldDescriptor::FT_U1V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "TagMask",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2TagInventoryMask::CC1G2TagInventoryMask (void)
{
    m_pType = &s_typeDescriptor;
  
    m_MB = 0;
    m_Pointer = 0;
}

CC1G2TagInventoryMask::~CC1G2TagInventoryMask (void)
{
}


CElement *
CC1G2TagInventoryMask::s_construct (void)
{
    return (CElement *) new CC1G2TagInventoryMask();
}


void
CC1G2TagInventoryMask::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2TagInventoryMask * pTarget = (CC1G2TagInventoryMask *) pTargetElement;

  
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
        pTarget->m_Pointer = pDecoderStream->get_u16(&s_fdPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdPointer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_TagMask = pDecoderStream->get_u1v(&s_fdTagMask);
    }
    else
    {
        pDecoderStream->get_u1v(&s_fdTagMask);
    }
    
}


void
CC1G2TagInventoryMask::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2TagInventoryMask::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2TagInventoryMask::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_Pointer, &s_fdPointer);

    pEncoderStream->put_u1v(m_TagMask, &s_fdTagMask);

}




/*
*****************************************************************
**
** Parameter C1G2TagInventoryStateAwareFilterAction
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2TagInventoryStateAwareFilterAction::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2TagInventoryStateAwareFilterAction",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    333,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2TagInventoryStateAwareFilterAction::s_apFieldDescriptorTable[] =
{
  
    &s_fdTarget,
    &s_fdAction,
    NULL
};



const CFieldDescriptor
CC1G2TagInventoryStateAwareFilterAction::s_fdTarget =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Target",	// m_pName
    g_estC1G2StateAwareTarget	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TagInventoryStateAwareFilterAction::s_fdAction =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Action",	// m_pName
    g_estC1G2StateAwareAction	// m_pEnumTable
};
CC1G2TagInventoryStateAwareFilterAction::CC1G2TagInventoryStateAwareFilterAction (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eTarget = (EC1G2StateAwareTarget) 0;
    m_eAction = (EC1G2StateAwareAction) 0;
}

CC1G2TagInventoryStateAwareFilterAction::~CC1G2TagInventoryStateAwareFilterAction (void)
{
}


CElement *
CC1G2TagInventoryStateAwareFilterAction::s_construct (void)
{
    return (CElement *) new CC1G2TagInventoryStateAwareFilterAction();
}


void
CC1G2TagInventoryStateAwareFilterAction::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2TagInventoryStateAwareFilterAction * pTarget = (CC1G2TagInventoryStateAwareFilterAction *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eTarget = (EC1G2StateAwareTarget) pDecoderStream->get_e8(&s_fdTarget);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdTarget);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eAction = (EC1G2StateAwareAction) pDecoderStream->get_e8(&s_fdAction);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAction);
    }

}


void
CC1G2TagInventoryStateAwareFilterAction::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2TagInventoryStateAwareFilterAction::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2TagInventoryStateAwareFilterAction::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eTarget, &s_fdTarget);

    pEncoderStream->put_e8((int)m_eAction, &s_fdAction);

}




/*
*****************************************************************
**
** Parameter C1G2TagInventoryStateUnawareFilterAction
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2TagInventoryStateUnawareFilterAction::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2TagInventoryStateUnawareFilterAction",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    334,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2TagInventoryStateUnawareFilterAction::s_apFieldDescriptorTable[] =
{
  
    &s_fdAction,
    NULL
};



const CFieldDescriptor
CC1G2TagInventoryStateUnawareFilterAction::s_fdAction =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Action",	// m_pName
    g_estC1G2StateUnawareAction	// m_pEnumTable
};
CC1G2TagInventoryStateUnawareFilterAction::CC1G2TagInventoryStateUnawareFilterAction (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eAction = (EC1G2StateUnawareAction) 0;
}

CC1G2TagInventoryStateUnawareFilterAction::~CC1G2TagInventoryStateUnawareFilterAction (void)
{
}


CElement *
CC1G2TagInventoryStateUnawareFilterAction::s_construct (void)
{
    return (CElement *) new CC1G2TagInventoryStateUnawareFilterAction();
}


void
CC1G2TagInventoryStateUnawareFilterAction::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2TagInventoryStateUnawareFilterAction * pTarget = (CC1G2TagInventoryStateUnawareFilterAction *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eAction = (EC1G2StateUnawareAction) pDecoderStream->get_e8(&s_fdAction);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdAction);
    }

}


void
CC1G2TagInventoryStateUnawareFilterAction::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2TagInventoryStateUnawareFilterAction::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2TagInventoryStateUnawareFilterAction::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eAction, &s_fdAction);

}




/*
*****************************************************************
**
** Parameter C1G2RFControl
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2RFControl::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2RFControl",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    335,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2RFControl::s_apFieldDescriptorTable[] =
{
  
    &s_fdModeIndex,
    &s_fdTari,
    NULL
};



const CFieldDescriptor
CC1G2RFControl::s_fdModeIndex =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "ModeIndex",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2RFControl::s_fdTari =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Tari",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2RFControl::CC1G2RFControl (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ModeIndex = 0;
    m_Tari = 0;
}

CC1G2RFControl::~CC1G2RFControl (void)
{
}


CElement *
CC1G2RFControl::s_construct (void)
{
    return (CElement *) new CC1G2RFControl();
}


void
CC1G2RFControl::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2RFControl * pTarget = (CC1G2RFControl *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ModeIndex = pDecoderStream->get_u16(&s_fdModeIndex);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdModeIndex);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Tari = pDecoderStream->get_u16(&s_fdTari);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdTari);
    }
    
}


void
CC1G2RFControl::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2RFControl::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2RFControl::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_ModeIndex, &s_fdModeIndex);

    pEncoderStream->put_u16(m_Tari, &s_fdTari);

}




/*
*****************************************************************
**
** Parameter C1G2SingulationControl
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2SingulationControl::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2SingulationControl",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    336,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2SingulationControl::s_apFieldDescriptorTable[] =
{
  
    &s_fdSession,
    &s_fdTagPopulation,
    &s_fdTagTransitTime,
    NULL
};



const CFieldDescriptor
CC1G2SingulationControl::s_fdSession =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Session",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2SingulationControl::s_fdTagPopulation =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TagPopulation",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2SingulationControl::s_fdTagTransitTime =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "TagTransitTime",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2SingulationControl::CC1G2SingulationControl (void)
{
    m_pType = &s_typeDescriptor;
  
    m_Session = 0;
    m_TagPopulation = 0;
    m_TagTransitTime = 0;
    m_pC1G2TagInventoryStateAwareSingulationAction = NULL;
}

CC1G2SingulationControl::~CC1G2SingulationControl (void)
{
}


CElement *
CC1G2SingulationControl::s_construct (void)
{
    return (CElement *) new CC1G2SingulationControl();
}


void
CC1G2SingulationControl::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2SingulationControl * pTarget = (CC1G2SingulationControl *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_Session = pDecoderStream->get_u2(&s_fdSession);
    }
    else
    {
        pDecoderStream->get_u2(&s_fdSession);
    }
    
    pDecoderStream->get_reserved(6);

    if(NULL != pTarget)
    {
        pTarget->m_TagPopulation = pDecoderStream->get_u16(&s_fdTagPopulation);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdTagPopulation);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_TagTransitTime = pDecoderStream->get_u32(&s_fdTagTransitTime);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdTagTransitTime);
    }
    
}


void
CC1G2SingulationControl::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2SingulationControl::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 0-1 of C1G2TagInventoryStateAwareSingulationAction
    pType = &CC1G2TagInventoryStateAwareSingulationAction::s_typeDescriptor;
  
    if(Cur != End && (*Cur)->m_pType == pType)
    {
        m_pC1G2TagInventoryStateAwareSingulationAction = (CC1G2TagInventoryStateAwareSingulationAction *)*Cur++;
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
CC1G2SingulationControl::setC1G2TagInventoryStateAwareSingulationAction (
  CC1G2TagInventoryStateAwareSingulationAction *     pValue)
{
    removeSubParameterFromAllList(m_pC1G2TagInventoryStateAwareSingulationAction);
    delete m_pC1G2TagInventoryStateAwareSingulationAction;
    m_pC1G2TagInventoryStateAwareSingulationAction = pValue;
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CC1G2SingulationControl::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u2(m_Session, &s_fdSession);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_TagPopulation, &s_fdTagPopulation);

    pEncoderStream->put_u32(m_TagTransitTime, &s_fdTagTransitTime);

    pType = &CC1G2TagInventoryStateAwareSingulationAction::s_typeDescriptor;
      
    pEncoderStream->putOptionalSubParameter(m_pC1G2TagInventoryStateAwareSingulationAction, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2TagInventoryStateAwareSingulationAction
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2TagInventoryStateAwareSingulationAction::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2TagInventoryStateAwareSingulationAction",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    337,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2TagInventoryStateAwareSingulationAction::s_apFieldDescriptorTable[] =
{
  
    &s_fdI,
    &s_fdS,
    NULL
};



const CFieldDescriptor
CC1G2TagInventoryStateAwareSingulationAction::s_fdI =
{
    CFieldDescriptor::FT_E1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "I",	// m_pName
    g_estC1G2TagInventoryStateAwareI	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TagInventoryStateAwareSingulationAction::s_fdS =
{
    CFieldDescriptor::FT_E1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "S",	// m_pName
    g_estC1G2TagInventoryStateAwareS	// m_pEnumTable
};
CC1G2TagInventoryStateAwareSingulationAction::CC1G2TagInventoryStateAwareSingulationAction (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eI = (EC1G2TagInventoryStateAwareI) 0;
    m_eS = (EC1G2TagInventoryStateAwareS) 0;
}

CC1G2TagInventoryStateAwareSingulationAction::~CC1G2TagInventoryStateAwareSingulationAction (void)
{
}


CElement *
CC1G2TagInventoryStateAwareSingulationAction::s_construct (void)
{
    return (CElement *) new CC1G2TagInventoryStateAwareSingulationAction();
}


void
CC1G2TagInventoryStateAwareSingulationAction::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2TagInventoryStateAwareSingulationAction * pTarget = (CC1G2TagInventoryStateAwareSingulationAction *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eI = (EC1G2TagInventoryStateAwareI) pDecoderStream->get_e1(&s_fdI);
    }
    else
    {
        pDecoderStream->get_e1(&s_fdI);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eS = (EC1G2TagInventoryStateAwareS) pDecoderStream->get_e1(&s_fdS);
    }
    else
    {
        pDecoderStream->get_e1(&s_fdS);
    }

    pDecoderStream->get_reserved(6);

}


void
CC1G2TagInventoryStateAwareSingulationAction::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2TagInventoryStateAwareSingulationAction::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2TagInventoryStateAwareSingulationAction::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e1((int)m_eI, &s_fdI);

    pEncoderStream->put_e1((int)m_eS, &s_fdS);

    pEncoderStream->put_reserved(6);

}




/*
*****************************************************************
**
** Parameter C1G2TagSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2TagSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2TagSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    338,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2TagSpec::s_apFieldDescriptorTable[] =
{
  
    NULL
};

CC1G2TagSpec::CC1G2TagSpec (void)
{
    m_pType = &s_typeDescriptor;
  
}

CC1G2TagSpec::~CC1G2TagSpec (void)
{
}


CElement *
CC1G2TagSpec::s_construct (void)
{
    return (CElement *) new CC1G2TagSpec();
}


void
CC1G2TagSpec::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2TagSpec * pTarget = (CC1G2TagSpec *) pTargetElement;

  
}


void
CC1G2TagSpec::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2TagSpec::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1-N of C1G2TargetTag
    pType = &CC1G2TargetTag::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listC1G2TargetTag.push_back((CC1G2TargetTag *)*Cur);
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
CC1G2TagSpec::addC1G2TargetTag (
  CC1G2TargetTag *     pValue)
{
    m_listC1G2TargetTag.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CC1G2TagSpec::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pType = &CC1G2TargetTag::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listC1G2TargetTag, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2TargetTag
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2TargetTag::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2TargetTag",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    339,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2TargetTag::s_apFieldDescriptorTable[] =
{
  
    &s_fdMB,
    &s_fdMatch,
    &s_fdPointer,
    &s_fdTagMask,
    &s_fdTagData,
    NULL
};



const CFieldDescriptor
CC1G2TargetTag::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TargetTag::s_fdMatch =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Match",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TargetTag::s_fdPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Pointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TargetTag::s_fdTagMask =
{
    CFieldDescriptor::FT_U1V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "TagMask",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2TargetTag::s_fdTagData =
{
    CFieldDescriptor::FT_U1V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "TagData",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2TargetTag::CC1G2TargetTag (void)
{
    m_pType = &s_typeDescriptor;
  
    m_MB = 0;
    m_Match = 0;
    m_Pointer = 0;
}

CC1G2TargetTag::~CC1G2TargetTag (void)
{
}


CElement *
CC1G2TargetTag::s_construct (void)
{
    return (CElement *) new CC1G2TargetTag();
}


void
CC1G2TargetTag::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2TargetTag * pTarget = (CC1G2TargetTag *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_MB = pDecoderStream->get_u2(&s_fdMB);
    }
    else
    {
        pDecoderStream->get_u2(&s_fdMB);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_Match = pDecoderStream->get_u1(&s_fdMatch);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdMatch);
    }
    
    pDecoderStream->get_reserved(5);

    if(NULL != pTarget)
    {
        pTarget->m_Pointer = pDecoderStream->get_u16(&s_fdPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdPointer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_TagMask = pDecoderStream->get_u1v(&s_fdTagMask);
    }
    else
    {
        pDecoderStream->get_u1v(&s_fdTagMask);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_TagData = pDecoderStream->get_u1v(&s_fdTagData);
    }
    else
    {
        pDecoderStream->get_u1v(&s_fdTagData);
    }
    
}


void
CC1G2TargetTag::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2TargetTag::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2TargetTag::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_u1(m_Match, &s_fdMatch);

    pEncoderStream->put_reserved(5);

    pEncoderStream->put_u16(m_Pointer, &s_fdPointer);

    pEncoderStream->put_u1v(m_TagMask, &s_fdTagMask);

    pEncoderStream->put_u1v(m_TagData, &s_fdTagData);

}




/*
*****************************************************************
**
** Parameter C1G2Read
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2Read::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2Read",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    341,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2Read::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdMB,
    &s_fdWordPointer,
    &s_fdWordCount,
    NULL
};



const CFieldDescriptor
CC1G2Read::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Read::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Read::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Read::s_fdWordPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordPointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Read::s_fdWordCount =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordCount",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2Read::CC1G2Read (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_MB = 0;
    m_WordPointer = 0;
    m_WordCount = 0;
}

CC1G2Read::~CC1G2Read (void)
{
}


CElement *
CC1G2Read::s_construct (void)
{
    return (CElement *) new CC1G2Read();
}


void
CC1G2Read::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2Read * pTarget = (CC1G2Read *) pTargetElement;

  
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
        pTarget->m_WordPointer = pDecoderStream->get_u16(&s_fdWordPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdWordPointer);
    }
    
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
CC1G2Read::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2Read::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2Read::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_WordPointer, &s_fdWordPointer);

    pEncoderStream->put_u16(m_WordCount, &s_fdWordCount);

}




/*
*****************************************************************
**
** Parameter C1G2Write
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2Write::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2Write",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    342,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2Write::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdMB,
    &s_fdWordPointer,
    &s_fdWriteData,
    NULL
};



const CFieldDescriptor
CC1G2Write::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Write::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Write::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Write::s_fdWordPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordPointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Write::s_fdWriteData =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "WriteData",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2Write::CC1G2Write (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_MB = 0;
    m_WordPointer = 0;
}

CC1G2Write::~CC1G2Write (void)
{
}


CElement *
CC1G2Write::s_construct (void)
{
    return (CElement *) new CC1G2Write();
}


void
CC1G2Write::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2Write * pTarget = (CC1G2Write *) pTargetElement;

  
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
        pTarget->m_WordPointer = pDecoderStream->get_u16(&s_fdWordPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdWordPointer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_WriteData = pDecoderStream->get_u16v(&s_fdWriteData);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdWriteData);
    }
    
}


void
CC1G2Write::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2Write::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2Write::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_WordPointer, &s_fdWordPointer);

    pEncoderStream->put_u16v(m_WriteData, &s_fdWriteData);

}




/*
*****************************************************************
**
** Parameter C1G2Kill
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2Kill::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2Kill",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    343,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2Kill::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdKillPassword,
    NULL
};



const CFieldDescriptor
CC1G2Kill::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Kill::s_fdKillPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "KillPassword",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2Kill::CC1G2Kill (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_KillPassword = 0;
}

CC1G2Kill::~CC1G2Kill (void)
{
}


CElement *
CC1G2Kill::s_construct (void)
{
    return (CElement *) new CC1G2Kill();
}


void
CC1G2Kill::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2Kill * pTarget = (CC1G2Kill *) pTargetElement;

  
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
        pTarget->m_KillPassword = pDecoderStream->get_u32(&s_fdKillPassword);
    }
    else
    {
        pDecoderStream->get_u32(&s_fdKillPassword);
    }
    
}


void
CC1G2Kill::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2Kill::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2Kill::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_KillPassword, &s_fdKillPassword);

}




/*
*****************************************************************
**
** Parameter C1G2Lock
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2Lock::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2Lock",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    344,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2Lock::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    NULL
};



const CFieldDescriptor
CC1G2Lock::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2Lock::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2Lock::CC1G2Lock (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
}

CC1G2Lock::~CC1G2Lock (void)
{
}


CElement *
CC1G2Lock::s_construct (void)
{
    return (CElement *) new CC1G2Lock();
}


void
CC1G2Lock::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2Lock * pTarget = (CC1G2Lock *) pTargetElement;

  
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
CC1G2Lock::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2Lock::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    // 1-N of C1G2LockPayload
    pType = &CC1G2LockPayload::s_typeDescriptor;
  
    if(Cur == End || (*Cur)->m_pType != pType)
    {
        goto missing;
    }
    while(Cur != End && (*Cur)->m_pType == pType)
    {
        m_listC1G2LockPayload.push_back((CC1G2LockPayload *)*Cur);
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
CC1G2Lock::addC1G2LockPayload (
  CC1G2LockPayload *     pValue)
{
    m_listC1G2LockPayload.push_back(pValue);
    addSubParameterToAllList(pValue);
    return RC_OK;
}

void
CC1G2Lock::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pType = &CC1G2LockPayload::s_typeDescriptor;
      
    pEncoderStream->putRequiredSubParameterList((tListOfParameters *) &m_listC1G2LockPayload, pType);
      
}




/*
*****************************************************************
**
** Parameter C1G2LockPayload
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2LockPayload::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2LockPayload",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    345,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2LockPayload::s_apFieldDescriptorTable[] =
{
  
    &s_fdPrivilege,
    &s_fdDataField,
    NULL
};



const CFieldDescriptor
CC1G2LockPayload::s_fdPrivilege =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Privilege",	// m_pName
    g_estC1G2LockPrivilege	// m_pEnumTable
};


const CFieldDescriptor
CC1G2LockPayload::s_fdDataField =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "DataField",	// m_pName
    g_estC1G2LockDataField	// m_pEnumTable
};
CC1G2LockPayload::CC1G2LockPayload (void)
{
    m_pType = &s_typeDescriptor;
  
    m_ePrivilege = (EC1G2LockPrivilege) 0;
    m_eDataField = (EC1G2LockDataField) 0;
}

CC1G2LockPayload::~CC1G2LockPayload (void)
{
}


CElement *
CC1G2LockPayload::s_construct (void)
{
    return (CElement *) new CC1G2LockPayload();
}


void
CC1G2LockPayload::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2LockPayload * pTarget = (CC1G2LockPayload *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_ePrivilege = (EC1G2LockPrivilege) pDecoderStream->get_e8(&s_fdPrivilege);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdPrivilege);
    }

    if(NULL != pTarget)
    {
        pTarget->m_eDataField = (EC1G2LockDataField) pDecoderStream->get_e8(&s_fdDataField);
    }
    else
    {
        pDecoderStream->get_e8(&s_fdDataField);
    }

}


void
CC1G2LockPayload::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2LockPayload::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2LockPayload::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_ePrivilege, &s_fdPrivilege);

    pEncoderStream->put_e8((int)m_eDataField, &s_fdDataField);

}




/*
*****************************************************************
**
** Parameter C1G2BlockErase
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2BlockErase::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2BlockErase",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    346,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2BlockErase::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdMB,
    &s_fdWordPointer,
    &s_fdWordCount,
    NULL
};



const CFieldDescriptor
CC1G2BlockErase::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockErase::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockErase::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockErase::s_fdWordPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordPointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockErase::s_fdWordCount =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordCount",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2BlockErase::CC1G2BlockErase (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_MB = 0;
    m_WordPointer = 0;
    m_WordCount = 0;
}

CC1G2BlockErase::~CC1G2BlockErase (void)
{
}


CElement *
CC1G2BlockErase::s_construct (void)
{
    return (CElement *) new CC1G2BlockErase();
}


void
CC1G2BlockErase::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2BlockErase * pTarget = (CC1G2BlockErase *) pTargetElement;

  
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
        pTarget->m_WordPointer = pDecoderStream->get_u16(&s_fdWordPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdWordPointer);
    }
    
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
CC1G2BlockErase::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2BlockErase::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2BlockErase::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_WordPointer, &s_fdWordPointer);

    pEncoderStream->put_u16(m_WordCount, &s_fdWordCount);

}




/*
*****************************************************************
**
** Parameter C1G2BlockWrite
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2BlockWrite::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2BlockWrite",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    347,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2BlockWrite::s_apFieldDescriptorTable[] =
{
  
    &s_fdOpSpecID,
    &s_fdAccessPassword,
    &s_fdMB,
    &s_fdWordPointer,
    &s_fdWriteData,
    NULL
};



const CFieldDescriptor
CC1G2BlockWrite::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockWrite::s_fdAccessPassword =
{
    CFieldDescriptor::FT_U32,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "AccessPassword",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockWrite::s_fdMB =
{
    CFieldDescriptor::FT_U2,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "MB",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockWrite::s_fdWordPointer =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "WordPointer",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockWrite::s_fdWriteData =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "WriteData",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2BlockWrite::CC1G2BlockWrite (void)
{
    m_pType = &s_typeDescriptor;
  
    m_OpSpecID = 0;
    m_AccessPassword = 0;
    m_MB = 0;
    m_WordPointer = 0;
}

CC1G2BlockWrite::~CC1G2BlockWrite (void)
{
}


CElement *
CC1G2BlockWrite::s_construct (void)
{
    return (CElement *) new CC1G2BlockWrite();
}


void
CC1G2BlockWrite::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2BlockWrite * pTarget = (CC1G2BlockWrite *) pTargetElement;

  
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
        pTarget->m_WordPointer = pDecoderStream->get_u16(&s_fdWordPointer);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdWordPointer);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_WriteData = pDecoderStream->get_u16v(&s_fdWriteData);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdWriteData);
    }
    
}


void
CC1G2BlockWrite::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2BlockWrite::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2BlockWrite::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u32(m_AccessPassword, &s_fdAccessPassword);

    pEncoderStream->put_u2(m_MB, &s_fdMB);

    pEncoderStream->put_reserved(6);

    pEncoderStream->put_u16(m_WordPointer, &s_fdWordPointer);

    pEncoderStream->put_u16v(m_WriteData, &s_fdWriteData);

}




/*
*****************************************************************
**
** Parameter C1G2EPCMemorySelector
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2EPCMemorySelector::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2EPCMemorySelector",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    348,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2EPCMemorySelector::s_apFieldDescriptorTable[] =
{
  
    &s_fdEnableCRC,
    &s_fdEnablePCBits,
    NULL
};



const CFieldDescriptor
CC1G2EPCMemorySelector::s_fdEnableCRC =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnableCRC",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2EPCMemorySelector::s_fdEnablePCBits =
{
    CFieldDescriptor::FT_U1,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "EnablePCBits",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2EPCMemorySelector::CC1G2EPCMemorySelector (void)
{
    m_pType = &s_typeDescriptor;
  
    m_EnableCRC = 0;
    m_EnablePCBits = 0;
}

CC1G2EPCMemorySelector::~CC1G2EPCMemorySelector (void)
{
}


CElement *
CC1G2EPCMemorySelector::s_construct (void)
{
    return (CElement *) new CC1G2EPCMemorySelector();
}


void
CC1G2EPCMemorySelector::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2EPCMemorySelector * pTarget = (CC1G2EPCMemorySelector *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_EnableCRC = pDecoderStream->get_u1(&s_fdEnableCRC);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnableCRC);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_EnablePCBits = pDecoderStream->get_u1(&s_fdEnablePCBits);
    }
    else
    {
        pDecoderStream->get_u1(&s_fdEnablePCBits);
    }
    
    pDecoderStream->get_reserved(6);

}


void
CC1G2EPCMemorySelector::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2EPCMemorySelector::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2EPCMemorySelector::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u1(m_EnableCRC, &s_fdEnableCRC);

    pEncoderStream->put_u1(m_EnablePCBits, &s_fdEnablePCBits);

    pEncoderStream->put_reserved(6);

}




/*
*****************************************************************
**
** Parameter C1G2_PC
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2_PC::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2_PC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    12,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2_PC::s_apFieldDescriptorTable[] =
{
  
    &s_fdPC_Bits,
    NULL
};



const CFieldDescriptor
CC1G2_PC::s_fdPC_Bits =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "PC_Bits",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2_PC::CC1G2_PC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_PC_Bits = 0;
}

CC1G2_PC::~CC1G2_PC (void)
{
}


CElement *
CC1G2_PC::s_construct (void)
{
    return (CElement *) new CC1G2_PC();
}


void
CC1G2_PC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2_PC * pTarget = (CC1G2_PC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_PC_Bits = pDecoderStream->get_u16(&s_fdPC_Bits);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdPC_Bits);
    }
    
}


void
CC1G2_PC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2_PC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2_PC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_PC_Bits, &s_fdPC_Bits);

}




/*
*****************************************************************
**
** Parameter C1G2_CRC
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2_CRC::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2_CRC",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    11,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2_CRC::s_apFieldDescriptorTable[] =
{
  
    &s_fdCRC,
    NULL
};



const CFieldDescriptor
CC1G2_CRC::s_fdCRC =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "CRC",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2_CRC::CC1G2_CRC (void)
{
    m_pType = &s_typeDescriptor;
  
    m_CRC = 0;
}

CC1G2_CRC::~CC1G2_CRC (void)
{
}


CElement *
CC1G2_CRC::s_construct (void)
{
    return (CElement *) new CC1G2_CRC();
}


void
CC1G2_CRC::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2_CRC * pTarget = (CC1G2_CRC *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_CRC = pDecoderStream->get_u16(&s_fdCRC);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdCRC);
    }
    
}


void
CC1G2_CRC::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2_CRC::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2_CRC::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_CRC, &s_fdCRC);

}




/*
*****************************************************************
**
** Parameter C1G2SingulationDetails
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2SingulationDetails::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2SingulationDetails",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    18,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2SingulationDetails::s_apFieldDescriptorTable[] =
{
  
    &s_fdNumCollisionSlots,
    &s_fdNumEmptySlots,
    NULL
};



const CFieldDescriptor
CC1G2SingulationDetails::s_fdNumCollisionSlots =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumCollisionSlots",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2SingulationDetails::s_fdNumEmptySlots =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumEmptySlots",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2SingulationDetails::CC1G2SingulationDetails (void)
{
    m_pType = &s_typeDescriptor;
  
    m_NumCollisionSlots = 0;
    m_NumEmptySlots = 0;
}

CC1G2SingulationDetails::~CC1G2SingulationDetails (void)
{
}


CElement *
CC1G2SingulationDetails::s_construct (void)
{
    return (CElement *) new CC1G2SingulationDetails();
}


void
CC1G2SingulationDetails::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2SingulationDetails * pTarget = (CC1G2SingulationDetails *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_NumCollisionSlots = pDecoderStream->get_u16(&s_fdNumCollisionSlots);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumCollisionSlots);
    }
    
    if(NULL != pTarget)
    {
        pTarget->m_NumEmptySlots = pDecoderStream->get_u16(&s_fdNumEmptySlots);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumEmptySlots);
    }
    
}


void
CC1G2SingulationDetails::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2SingulationDetails::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2SingulationDetails::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_u16(m_NumCollisionSlots, &s_fdNumCollisionSlots);

    pEncoderStream->put_u16(m_NumEmptySlots, &s_fdNumEmptySlots);

}




/*
*****************************************************************
**
** Parameter C1G2ReadOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2ReadOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2ReadOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    349,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2ReadOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    &s_fdReadData,
    NULL
};



const CFieldDescriptor
CC1G2ReadOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estC1G2ReadResultType	// m_pEnumTable
};


const CFieldDescriptor
CC1G2ReadOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2ReadOpSpecResult::s_fdReadData =
{
    CFieldDescriptor::FT_U16V,	// m_eFieldType
    CFieldDescriptor::FMT_HEX,	// m_eFieldFormat
    "ReadData",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2ReadOpSpecResult::CC1G2ReadOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EC1G2ReadResultType) 0;
    m_OpSpecID = 0;
}

CC1G2ReadOpSpecResult::~CC1G2ReadOpSpecResult (void)
{
}


CElement *
CC1G2ReadOpSpecResult::s_construct (void)
{
    return (CElement *) new CC1G2ReadOpSpecResult();
}


void
CC1G2ReadOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2ReadOpSpecResult * pTarget = (CC1G2ReadOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EC1G2ReadResultType) pDecoderStream->get_e8(&s_fdResult);
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
        pTarget->m_ReadData = pDecoderStream->get_u16v(&s_fdReadData);
    }
    else
    {
        pDecoderStream->get_u16v(&s_fdReadData);
    }
    
}


void
CC1G2ReadOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2ReadOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2ReadOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u16v(m_ReadData, &s_fdReadData);

}




/*
*****************************************************************
**
** Parameter C1G2WriteOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2WriteOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2WriteOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    350,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2WriteOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    &s_fdNumWordsWritten,
    NULL
};



const CFieldDescriptor
CC1G2WriteOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estC1G2WriteResultType	// m_pEnumTable
};


const CFieldDescriptor
CC1G2WriteOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2WriteOpSpecResult::s_fdNumWordsWritten =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumWordsWritten",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2WriteOpSpecResult::CC1G2WriteOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EC1G2WriteResultType) 0;
    m_OpSpecID = 0;
    m_NumWordsWritten = 0;
}

CC1G2WriteOpSpecResult::~CC1G2WriteOpSpecResult (void)
{
}


CElement *
CC1G2WriteOpSpecResult::s_construct (void)
{
    return (CElement *) new CC1G2WriteOpSpecResult();
}


void
CC1G2WriteOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2WriteOpSpecResult * pTarget = (CC1G2WriteOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EC1G2WriteResultType) pDecoderStream->get_e8(&s_fdResult);
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
        pTarget->m_NumWordsWritten = pDecoderStream->get_u16(&s_fdNumWordsWritten);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumWordsWritten);
    }
    
}


void
CC1G2WriteOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2WriteOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2WriteOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u16(m_NumWordsWritten, &s_fdNumWordsWritten);

}




/*
*****************************************************************
**
** Parameter C1G2KillOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2KillOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2KillOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    351,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2KillOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    NULL
};



const CFieldDescriptor
CC1G2KillOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estC1G2KillResultType	// m_pEnumTable
};


const CFieldDescriptor
CC1G2KillOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2KillOpSpecResult::CC1G2KillOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EC1G2KillResultType) 0;
    m_OpSpecID = 0;
}

CC1G2KillOpSpecResult::~CC1G2KillOpSpecResult (void)
{
}


CElement *
CC1G2KillOpSpecResult::s_construct (void)
{
    return (CElement *) new CC1G2KillOpSpecResult();
}


void
CC1G2KillOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2KillOpSpecResult * pTarget = (CC1G2KillOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EC1G2KillResultType) pDecoderStream->get_e8(&s_fdResult);
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
CC1G2KillOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2KillOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2KillOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

}




/*
*****************************************************************
**
** Parameter C1G2LockOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2LockOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2LockOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    352,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2LockOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    NULL
};



const CFieldDescriptor
CC1G2LockOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estC1G2LockResultType	// m_pEnumTable
};


const CFieldDescriptor
CC1G2LockOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2LockOpSpecResult::CC1G2LockOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EC1G2LockResultType) 0;
    m_OpSpecID = 0;
}

CC1G2LockOpSpecResult::~CC1G2LockOpSpecResult (void)
{
}


CElement *
CC1G2LockOpSpecResult::s_construct (void)
{
    return (CElement *) new CC1G2LockOpSpecResult();
}


void
CC1G2LockOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2LockOpSpecResult * pTarget = (CC1G2LockOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EC1G2LockResultType) pDecoderStream->get_e8(&s_fdResult);
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
CC1G2LockOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2LockOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2LockOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

}




/*
*****************************************************************
**
** Parameter C1G2BlockEraseOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2BlockEraseOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2BlockEraseOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    353,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2BlockEraseOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    NULL
};



const CFieldDescriptor
CC1G2BlockEraseOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estC1G2BlockEraseResultType	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockEraseOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2BlockEraseOpSpecResult::CC1G2BlockEraseOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EC1G2BlockEraseResultType) 0;
    m_OpSpecID = 0;
}

CC1G2BlockEraseOpSpecResult::~CC1G2BlockEraseOpSpecResult (void)
{
}


CElement *
CC1G2BlockEraseOpSpecResult::s_construct (void)
{
    return (CElement *) new CC1G2BlockEraseOpSpecResult();
}


void
CC1G2BlockEraseOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2BlockEraseOpSpecResult * pTarget = (CC1G2BlockEraseOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EC1G2BlockEraseResultType) pDecoderStream->get_e8(&s_fdResult);
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
CC1G2BlockEraseOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2BlockEraseOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2BlockEraseOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

}




/*
*****************************************************************
**
** Parameter C1G2BlockWriteOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CC1G2BlockWriteOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "C1G2BlockWriteOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    &g_nsdescllrp,	// m_pNamespaceDescriptor
    354,	// m_TypeNum
    NULL,    // m_pResponseType

    s_apFieldDescriptorTable,   // m_ppFieldDescriptorTable
    s_construct,                // m_pfConstruct
    s_decodeFields,             // m_pfDecodeFields
};



const CFieldDescriptor * const
CC1G2BlockWriteOpSpecResult::s_apFieldDescriptorTable[] =
{
  
    &s_fdResult,
    &s_fdOpSpecID,
    &s_fdNumWordsWritten,
    NULL
};



const CFieldDescriptor
CC1G2BlockWriteOpSpecResult::s_fdResult =
{
    CFieldDescriptor::FT_E8,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "Result",	// m_pName
    g_estC1G2BlockWriteResultType	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockWriteOpSpecResult::s_fdOpSpecID =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "OpSpecID",	// m_pName
    NULL	// m_pEnumTable
};


const CFieldDescriptor
CC1G2BlockWriteOpSpecResult::s_fdNumWordsWritten =
{
    CFieldDescriptor::FT_U16,	// m_eFieldType
    CFieldDescriptor::FMT_NORMAL,	// m_eFieldFormat
    "NumWordsWritten",	// m_pName
    NULL	// m_pEnumTable
};
CC1G2BlockWriteOpSpecResult::CC1G2BlockWriteOpSpecResult (void)
{
    m_pType = &s_typeDescriptor;
  
    m_eResult = (EC1G2BlockWriteResultType) 0;
    m_OpSpecID = 0;
    m_NumWordsWritten = 0;
}

CC1G2BlockWriteOpSpecResult::~CC1G2BlockWriteOpSpecResult (void)
{
}


CElement *
CC1G2BlockWriteOpSpecResult::s_construct (void)
{
    return (CElement *) new CC1G2BlockWriteOpSpecResult();
}


void
CC1G2BlockWriteOpSpecResult::s_decodeFields (
  CDecoderStream *              pDecoderStream,
  CElement *                    pTargetElement)
{
    CC1G2BlockWriteOpSpecResult * pTarget = (CC1G2BlockWriteOpSpecResult *) pTargetElement;

  
    if(NULL != pTarget)
    {
        pTarget->m_eResult = (EC1G2BlockWriteResultType) pDecoderStream->get_e8(&s_fdResult);
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
        pTarget->m_NumWordsWritten = pDecoderStream->get_u16(&s_fdNumWordsWritten);
    }
    else
    {
        pDecoderStream->get_u16(&s_fdNumWordsWritten);
    }
    
}


void
CC1G2BlockWriteOpSpecResult::decodeFields (
  CDecoderStream *              pDecoderStream)
{
    s_decodeFields(pDecoderStream, (CElement *)this);
}


void
CC1G2BlockWriteOpSpecResult::assimilateSubParameters (
  CErrorDetails *               pError)
{
    tListOfParameters::iterator Cur = m_listAllSubParameters.begin();
    tListOfParameters::iterator End = m_listAllSubParameters.end();
    const CTypeDescriptor *     pType;

  

    if(Cur != End)
    {
        pError->unexpectedParameter(*Cur);
    }

    return;

  missing:
    pError->missingParameter(pType);
}


void
CC1G2BlockWriteOpSpecResult::encode (
  CEncoderStream *              pEncoderStream) const
{
    const CTypeDescriptor *     pType;

  
    pEncoderStream->put_e8((int)m_eResult, &s_fdResult);

    pEncoderStream->put_u16(m_OpSpecID, &s_fdOpSpecID);

    pEncoderStream->put_u16(m_NumWordsWritten, &s_fdNumWordsWritten);

}




/*
*****************************************************************
**
** Choice SpecParameter
**
*****************************************************************
*/
  

const CTypeDescriptor
CSpecParameter::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "SpecParameter",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CSpecParameter::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CAISpec::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CRFSurveySpec::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(pParameter->isAllowedExtension(&s_typeDescriptor))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AccessCommandOpSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessCommandOpSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessCommandOpSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAccessCommandOpSpec::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2Read::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2Write::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2Kill::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2Lock::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2BlockErase::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2BlockWrite::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(pParameter->isAllowedExtension(&s_typeDescriptor))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AccessCommandOpSpecResult
**
*****************************************************************
*/
  

const CTypeDescriptor
CAccessCommandOpSpecResult::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AccessCommandOpSpecResult",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAccessCommandOpSpecResult::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2ReadOpSpecResult::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2WriteOpSpecResult::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2KillOpSpecResult::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2LockOpSpecResult::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2BlockEraseOpSpecResult::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2BlockWriteOpSpecResult::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(pParameter->isAllowedExtension(&s_typeDescriptor))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice EPCParameter
**
*****************************************************************
*/
  

const CTypeDescriptor
CEPCParameter::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "EPCParameter",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CEPCParameter::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CEPCData::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CEPC_96::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice Timestamp
**
*****************************************************************
*/
  

const CTypeDescriptor
CTimestamp::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "Timestamp",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CTimestamp::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CUTCTimestamp::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CUptime::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolLLRPCapabilities
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolLLRPCapabilities::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolLLRPCapabilities",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolLLRPCapabilities::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2LLRPCapabilities::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolUHFRFModeTable
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolUHFRFModeTable::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolUHFRFModeTable",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolUHFRFModeTable::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2UHFRFModeTable::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolInventoryCommandSettings
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolInventoryCommandSettings::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolInventoryCommandSettings",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolInventoryCommandSettings::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2InventoryCommand::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolTagSpec
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolTagSpec::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolTagSpec",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolTagSpec::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2TagSpec::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolEPCMemorySelector
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolEPCMemorySelector::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolEPCMemorySelector",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolEPCMemorySelector::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2EPCMemorySelector::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolTagData
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolTagData::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolTagData",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolTagData::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2_PC::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      
    if(&CC1G2_CRC::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolSingulationDetails
**
*****************************************************************
*/
  

const CTypeDescriptor
CAirProtocolSingulationDetails::s_typeDescriptor =
{
    FALSE,		// m_bIsMessage
    "AirProtocolSingulationDetails",	// m_pName
    NULL,	// m_pVendorDescriptor
    NULL,	// m_pNamespaceDescriptor
    (llrp_u32_t)(-1),	// m_TypeNum
    NULL,   // m_ppFieldDescriptorTable
    NULL,                // m_pfConstruct
    NULL,             // m_pfDecodeFields
};

llrp_bool_t
CAirProtocolSingulationDetails::isMember (
  CParameter *                  pParameter)
{
    const CTypeDescriptor *     pType;

    pType = pParameter->m_pType;

  
    if(&CC1G2SingulationDetails::s_typeDescriptor == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}


void
enrollCoreTypesIntoRegistry (
  CTypeRegistry *               pTypeRegistry)
{
  
    pTypeRegistry->enroll(&CUTCTimestamp::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CUptime::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CCUSTOM_MESSAGE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CCustom::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_READER_CAPABILITIES::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_READER_CAPABILITIES_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGeneralDeviceCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CReceiveSensitivityTableEntry::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CPerAntennaReceiveSensitivityRange::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CPerAntennaAirProtocol::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGPIOCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CLLRPCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRegulatoryCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CUHFBandCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CTransmitPowerLevelTableEntry::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFrequencyInformation::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFrequencyHopTable::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFixedFrequencyTable::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CADD_ROSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CADD_ROSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDELETE_ROSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDELETE_ROSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSTART_ROSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSTART_ROSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSTOP_ROSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSTOP_ROSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CENABLE_ROSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CENABLE_ROSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDISABLE_ROSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDISABLE_ROSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_ROSPECS::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_ROSPECS_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROBoundarySpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROSpecStartTrigger::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CPeriodicTriggerValue::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGPITriggerValue::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROSpecStopTrigger::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAISpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAISpecStopTrigger::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CTagObservationTrigger::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CInventoryParameterSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRFSurveySpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRFSurveySpecStopTrigger::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CADD_ACCESSSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CADD_ACCESSSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDELETE_ACCESSSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDELETE_ACCESSSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CENABLE_ACCESSSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CENABLE_ACCESSSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDISABLE_ACCESSSPEC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CDISABLE_ACCESSSPEC_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_ACCESSSPECS::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_ACCESSSPECS_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAccessSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAccessSpecStopTrigger::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAccessCommand::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_READER_CONFIG::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_READER_CONFIG_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSET_READER_CONFIG::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSET_READER_CONFIG_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CCLOSE_CONNECTION::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CCLOSE_CONNECTION_RESPONSE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CLLRPConfigurationStateValue::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CIdentification::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGPOWriteData::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CKeepaliveSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAntennaProperties::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAntennaConfiguration::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRFReceiver::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRFTransmitter::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGPIPortCurrentState::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CEventsAndReports::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGET_REPORT::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRO_ACCESS_REPORT::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CKEEPALIVE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CKEEPALIVE_ACK::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CREADER_EVENT_NOTIFICATION::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CENABLE_EVENTS_AND_REPORTS::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROReportSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CTagReportContentSelector::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAccessReportSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CTagReportData::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CEPCData::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CEPC_96::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROSpecID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CSpecIndex::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CInventoryParameterSpecID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAntennaID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CPeakRSSI::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CChannelIndex::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFirstSeenTimestampUTC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFirstSeenTimestampUptime::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CLastSeenTimestampUTC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CLastSeenTimestampUptime::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CTagSeenCount::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAccessSpecID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRFSurveyReportData::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFrequencyRSSILevelEntry::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CReaderEventNotificationSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CEventNotificationState::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CReaderEventNotificationData::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CHoppingEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CGPIEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CROSpecEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CReportBufferLevelWarningEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CReportBufferOverflowErrorEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CReaderExceptionEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&COpSpecID::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CRFSurveyEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAISpecEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CAntennaEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CConnectionAttemptEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CConnectionCloseEvent::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CERROR_MESSAGE::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CLLRPStatus::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CFieldError::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CParameterError::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2LLRPCapabilities::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2UHFRFModeTable::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2UHFRFModeTableEntry::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2InventoryCommand::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2Filter::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2TagInventoryMask::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2TagInventoryStateAwareFilterAction::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2TagInventoryStateUnawareFilterAction::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2RFControl::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2SingulationControl::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2TagInventoryStateAwareSingulationAction::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2TagSpec::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2TargetTag::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2Read::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2Write::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2Kill::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2Lock::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2LockPayload::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2BlockErase::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2BlockWrite::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2EPCMemorySelector::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2_PC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2_CRC::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2SingulationDetails::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2ReadOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2WriteOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2KillOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2LockOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2BlockEraseOpSpecResult::s_typeDescriptor);
  
    pTypeRegistry->enroll(&CC1G2BlockWriteOpSpecResult::s_typeDescriptor);
  
}
