// addr: 0x00b0a730
// name: FUN_00b0a730
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00b0a730(int param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  fVar1 = *(float *)(param_1 + 0x1e0);
  fVar2 = *(float *)(param_1 + 0x1e4);
  fVar3 = *(float *)(param_1 + 0x1e8);
  TiXmlElement_SetAttribute(param_2,"shape","dome");
  FUN_00d53030(&DAT_0181d29c,(int)fVar1);
  FUN_00d53030(&DAT_0181d298,(int)fVar2);
  FUN_00d53030(&DAT_0181d294,(int)fVar3);
  FUN_00d53030("radius",(int)*(float *)(param_1 + 0x1f0));
  return;
}

