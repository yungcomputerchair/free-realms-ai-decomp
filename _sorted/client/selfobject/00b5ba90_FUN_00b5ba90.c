// addr: 0x00b5ba90
// name: FUN_00b5ba90
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00b5ba90(int param_1,void *param_2)

{
  undefined4 *puVar1;
  
                    /* Deserializes an unknown record by calling a base/header parser, reading a
                       nested SelfObject_ClientPcData collection, then reading a dword and a uint64.
                       Class identity is not evident. */
  FUN_00b55280(param_2);
  SelfObject_ClientPcDataMap_deserialize(param_2,(void *)(param_1 + 0xc));
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  puVar1 = *(undefined4 **)((int)param_2 + 8);
  if (*(undefined4 **)((int)param_2 + 0xc) < puVar1 + 2) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = *puVar1;
  *(undefined4 *)(param_1 + 0x34) = puVar1[1];
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 8;
  return;
}

