// addr: 0x00963040
// name: FUN_00963040
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void setPlayerFlag_143_bit4(void * player, bool enabled_) */

void __thiscall setPlayerFlag_143_bit4(void *this,void *player,bool enabled_)

{
  int iVar1;
  float10 fVar2;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
                    /* Toggles bit 4 of byte 0x143 on a player-like object and, when clearing it,
                       sends/updates an orientation vector derived from fields around 0x610 and a
                       related object. The exact semantic name is unknown. */
  if ((byte)player != (*(byte *)((int)this + 0x143) >> 4 & 1)) {
    if ((byte)player == 0) {
      *(byte *)((int)this + 0x143) = *(byte *)((int)this + 0x143) & 0xef;
    }
    else {
      *(byte *)((int)this + 0x143) = *(byte *)((int)this + 0x143) | 0x10;
    }
    if ((*(byte *)((int)this + 0x143) & 0x10) == 0) {
      iVar1 = (**(code **)(*(int *)this + 0x24))();
      if (iVar1 != 0) {
        uStack_1c = *(undefined4 *)(iVar1 + 0x2f4);
        fVar2 = (float10)fpatan((float10)*(float *)((int)this + 0x610),
                                (float10)*(float *)((int)this + 0x618));
        uStack_18 = *(undefined4 *)(iVar1 + 0x2f8);
        uStack_14 = *(undefined4 *)(iVar1 + 0x2fc);
        fStack_20 = (float)fVar2;
        FUN_007776b0(&fStack_20);
      }
    }
  }
  return;
}

