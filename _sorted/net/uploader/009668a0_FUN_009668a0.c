// addr: 0x009668a0
// name: FUN_009668a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Player_setMovementController_variant(void * player, undefined4) */

void __thiscall Player_setMovementController_variant(void *this,void *player,undefined4 param_2)

{
  byte enabled_;
  void *pvVar1;
  undefined4 uVar2;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the player movement controller with a newly allocated 0x40-byte
                       controller, guarded by movement update toggles. Exact controller class is not
                       named. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0159673b;
  local_c = ExceptionList;
  enabled_ = (byte)DAT_01b839d8 ^ (byte)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 0x3fc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x3fc))(1);
  }
  *(undefined4 *)((int)this + 0x3fc) = 0;
  setPlayerFlag_143_bit4(this,(void *)0x1,(bool)enabled_);
  pvVar1 = Mem_Alloc(0x40);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ProxiedCharacterRelativeRailMovementController_ctor
                      (this,player,param_2,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x3fc) = uVar2;
  setPlayerFlag_143_bit4(this,(void *)0x0,(bool)enabled_);
  ExceptionList = local_c;
  return;
}

