// addr: 0x00966970
// name: Player_setProxiedCharacterSeekMovementController
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Player_setProxiedCharacterSeekMovementController(void * player) */

void __fastcall Player_setProxiedCharacterSeekMovementController(void *player)

{
  byte enabled_;
  void *pvVar1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  float in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  float *in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the player movement controller with a
                       ProxiedCharacterSeekMovementController and toggles movement update guards. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0159676b;
  local_c = ExceptionList;
  enabled_ = (byte)DAT_01b839d8 ^ (byte)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)player + 0x3fc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)player + 0x3fc))();
  }
  *(undefined4 *)((int)player + 0x3fc) = 0;
  setPlayerFlag_143_bit4(player,(void *)0x1,(bool)enabled_);
  pvVar1 = Mem_Alloc(0x30);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProxiedCharacterSeekMovementController_ctor
                       (pvVar1,player,*(undefined4 *)((int)player + 0x738),in_stack_00000004,
                        in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
                        in_stack_00000018,in_stack_0000001c,in_stack_00000020);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)player + 0x3fc) = pvVar1;
  setPlayerFlag_143_bit4(player,(void *)0x0,(bool)enabled_);
  ExceptionList = local_c;
  return;
}

