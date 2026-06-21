// addr: 0x00ceb840
// name: FUN_00ceb840
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ceb840(int *param_1,void *param_2)

{
  char *value;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  value = (char *)(**(code **)(*param_1 + 0x28))();
  TiXmlElement_SetAttribute(param_2,"type",value);
  FUN_00d53030(&DAT_017eda64,param_1[7]);
  FUN_00d53030("RegionOverride",param_1[0xe]);
  return;
}

