// addr: 0x01346340
// name: Player_create
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * Player_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x4c bytes and constructs a Player object via Player_ctor,
                       returning null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cf5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x4c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Player_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

