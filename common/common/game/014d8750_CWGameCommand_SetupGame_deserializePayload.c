// addr: 0x014d8750
// name: CWGameCommand_SetupGame_deserializePayload
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CWGameCommand_SetupGame_deserializePayload(void * this, void * reader) */

uint __thiscall CWGameCommand_SetupGame_deserializePayload(void *this,void *reader)

{
  void *this_00;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  char extraout_AL_01;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  uint3 extraout_var_10;
  uint3 extraout_var_11;
  uint3 extraout_var_12;
  uint3 extraout_var_13;
  uint3 extraout_var_14;
  uint uVar2;
  
                    /* Deserializes the extended CW setup-game payload with base game command
                       fields, multiple integers, two vectors, and version-gated optional fields. */
  this_00 = reader;
  (**(code **)(*(int *)this + 0x10))(reader,&reader);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(this_00);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0xc));
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x24));
        uVar3 = extraout_var_02;
        if (bVar1) {
          if (8 < (int)this) {
            bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x28));
            uVar3 = extraout_var_03;
            if (!bVar1) goto LAB_014d876c;
          }
          bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x2c));
          uVar3 = extraout_var_04;
          if (bVar1) {
            Deserializer_readIntegerVector(&stack0xfffffff4,(void *)((int)this + 0x30));
            Deserializer_readIntegerVector(&stack0xfffffff4,(void *)((int)this + 0x40));
            bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x50));
            uVar3 = extraout_var_05;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x54));
              uVar3 = extraout_var_06;
              if (bVar1) {
                if (2 < (int)this) {
                  bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x58));
                  uVar3 = extraout_var_07;
                  if (!bVar1) goto LAB_014d876c;
                }
                if (3 < (int)this) {
                  bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x5c));
                  uVar3 = extraout_var_08;
                  if (!bVar1) goto LAB_014d876c;
                }
                if (4 < (int)this) {
                  bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x60));
                  uVar3 = extraout_var_09;
                  if (!bVar1) goto LAB_014d876c;
                }
                if (5 < (int)this) {
                  bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 100));
                  uVar3 = extraout_var_10;
                  if (!bVar1) goto LAB_014d876c;
                }
                if (6 < (int)this) {
                  bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x68));
                  uVar3 = extraout_var_11;
                  if (!bVar1) goto LAB_014d876c;
                }
                if (7 < (int)this) {
                  GameObjectIdVector_deserialize((int)this + 0x6c);
                  uVar3 = extraout_var_12;
                  if (extraout_AL_01 == '\0') goto LAB_014d876c;
                  bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x78));
                  uVar3 = extraout_var_13;
                  if (!bVar1) goto LAB_014d876c;
                }
                if (9 < (int)this) {
                  bVar1 = Deserializer_readInteger(this_00,(int *)&stack0xfffffff4);
                  uVar3 = extraout_var_14;
                  if (!bVar1) goto LAB_014d876c;
                  *(void **)((int)this + 0x7c) = this_00;
                }
                uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
                return uVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_014d876c:
  return (uint)uVar3 << 8;
}

