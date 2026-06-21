// addr: 0x013aed70
// name: FUN_013aed70
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PacketBufferFactory_createAndAttach(void * factory) */

void __fastcall PacketBufferFactory_createAndAttach(void *factory)

{
  uint uVar1;
  void *buffer;
  undefined4 extraout_EAX;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a PacketBuffer, initializes it, then passes it to a virtual
                       attach/register method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686ceb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  buffer = Mem_Alloc(0x14);
  local_4 = 0;
  if (buffer == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    PacketBuffer_init(buffer);
    uVar2 = extraout_EAX;
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 8))(uVar2,uVar1);
  ExceptionList = buffer;
  return;
}

