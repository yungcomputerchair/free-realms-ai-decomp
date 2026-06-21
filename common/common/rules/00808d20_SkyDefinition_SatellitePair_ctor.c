// addr: 0x00808d20
// name: SkyDefinition_SatellitePair_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
SkyDefinition_SatellitePair_ctor
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a two-satellite blend object by constructing two
                       SkyDefinition::Satellite members and storing a blend factor at offset 0x80.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015679e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SkyDefinition_Satellite_ctor(param_2);
  local_4 = 0;
  SkyDefinition_Satellite_ctor(param_3);
  *(undefined4 *)(param_1 + 0x80) = param_4;
  ExceptionList = local_c;
  return param_1;
}

