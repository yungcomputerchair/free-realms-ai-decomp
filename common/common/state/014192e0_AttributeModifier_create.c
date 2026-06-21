// addr: 0x014192e0
// name: AttributeModifier_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int AttributeModifier_create(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an AttributeModifier-sized object, constructs it, and returns the
                       adjusted interface pointer. Returns null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169356b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x108);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = AttributeModifier_ctor(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return iVar2 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

