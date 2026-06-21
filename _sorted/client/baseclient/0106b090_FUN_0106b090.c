// addr: 0x0106b090
// name: FUN_0106b090
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void shipCombatConfigRecord_init(void * config) */

void __fastcall shipCombatConfigRecord_init(void *config)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Initializes a ship-combat-related configuration record with default numeric
                       values and an IString member. */
  *(undefined4 *)((int)config + 4) = DAT_017ea718;
  *(undefined4 *)((int)config + 8) = _DAT_0175b420;
  *(undefined4 *)((int)config + 0x14) = DAT_017f1948;
  *(undefined4 *)((int)config + 0x18) = DAT_017ed938;
  uVar1 = _DAT_017ed38c;
  *(undefined4 *)config = 0;
  *(undefined4 *)((int)config + 0xc) = 0;
  *(undefined4 *)((int)config + 0x10) = 0;
  *(undefined4 *)((int)config + 0x1c) = uVar1;
  uVar2 = _DAT_01881ef8;
  *(undefined4 *)((int)config + 0x34) = 0;
  uVar1 = DAT_0181c5b4;
  *(undefined4 *)((int)config + 0x20) = uVar2;
  uVar2 = DAT_01881ef4;
  *(undefined4 *)((int)config + 0x48) = uVar1;
  *(undefined4 *)((int)config + 0x4c) = uVar1;
  uVar1 = DAT_01811154;
  *(undefined4 *)((int)config + 0x24) = uVar2;
  uVar2 = DAT_01881ef0;
  *(undefined4 *)((int)config + 0x50) = uVar1;
  uVar1 = DAT_017ed858;
  *(undefined4 *)((int)config + 0x28) = uVar2;
  uVar2 = DAT_017f0250;
  *(undefined4 *)((int)config + 0x54) = uVar1;
  uVar1 = DAT_017e99a8;
  *(undefined4 *)((int)config + 0x2c) = uVar2;
  uVar2 = DAT_0181105c;
  *(undefined4 *)((int)config + 0x58) = uVar1;
  uVar1 = _DAT_017e75b0;
  *(undefined4 *)((int)config + 0x30) = uVar2;
  *(undefined1 *)((int)config + 0x38) = 0;
  *(undefined4 *)((int)config + 0x3c) = 0xc;
  *(undefined4 *)((int)config + 0x40) = 0xc;
  *(undefined4 *)((int)config + 0x44) = 2;
  *(undefined4 *)((int)config + 0x5c) = uVar1;
  *(undefined ***)((int)config + 0x60) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)config + 100) = &DAT_01cb7500;
  *(undefined4 *)((int)config + 0x6c) = 0;
  *(undefined4 *)((int)config + 0x68) = 0;
  return;
}

