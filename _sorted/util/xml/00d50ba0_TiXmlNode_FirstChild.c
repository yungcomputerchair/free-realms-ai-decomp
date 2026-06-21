// addr: 0x00d50ba0
// name: TiXmlNode_FirstChild
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall TiXmlNode_FirstChild(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if (iVar1 != 0) break;
    param_1 = (int *)param_1[4];
  }
                    /* WARNING: Could not recover jumptable at 0x00d50bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x10))();
  return uVar2;
}

