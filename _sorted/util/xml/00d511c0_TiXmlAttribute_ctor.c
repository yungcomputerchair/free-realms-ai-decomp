// addr: 0x00d511c0
// name: TiXmlAttribute_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TiXmlAttribute_ctor(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a TiXmlAttribute ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  puStack_8 = &LAB_01616d0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = TiXmlAttribute::vftable;
  param_1[5] = &DAT_01bf2c00;
  param_1[6] = &DAT_01bf2c00;
  local_4 = 2;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00d53650(param_2,(int)pcVar2 - (int)(param_2 + 1));
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00d53650(param_3,(int)pcVar2 - (int)(param_3 + 1));
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}

