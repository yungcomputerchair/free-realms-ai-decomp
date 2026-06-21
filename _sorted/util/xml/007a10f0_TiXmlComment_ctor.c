// addr: 0x007a10f0
// name: TiXmlComment_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TiXmlComment_ctor(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a TiXmlComment ctor routine. Evidence: vftable/call-shape evidence
                       in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155c428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TiXmlNode_ctor(param_1,2);
  local_4 = 0;
  *param_1 = TiXmlComment::vftable;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00d53650(param_2,(int)pcVar2 - (int)(param_2 + 1));
  ExceptionList = local_c;
  return param_1;
}

