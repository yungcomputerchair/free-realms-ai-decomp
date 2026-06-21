// addr: 0x00ac2180
// name: FUN_00ac2180
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ac2180(int param_1,void *param_2)

{
                    /* Deserializes an unknown housing/fixture aggregate by invoking several nested
                       parsers including HousingFixtureRef_deserialize and Stream_ReadU64Array, then
                       reading three scalar fields. No class name is evident. */
  FUN_00ab2bc0(param_2);
  FUN_00ab6f40(param_2);
  HousingFixtureRef_deserialize(*(void **)(param_1 + 0x10),param_2);
  FUN_00abeb40(param_2);
  Stream_ReadU64Array(param_2,(void *)(param_1 + 0x1c));
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = **(undefined4 **)((int)param_2 + 8);
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  return;
}

