// addr: 0x013cdab0
// name: ComponentFactoryRegistryEntry_copyConstruct
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 * __thiscall
ComponentFactoryRegistryEntry_copyConstruct(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a component factory registry entry by copying the type/key
                       byte, allocating/copying a factory payload, initializing a small vector/list,
                       and setting flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a866;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar2 = FUN_013cc8d0(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_14 = param_1 + 4;
  FUN_013cd830(9,&local_14);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}

