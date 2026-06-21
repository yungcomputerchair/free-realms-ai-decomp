// addr: 0x012cca70
// name: CaseInsensitiveStringPair_ctor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CaseInsensitiveStringPair_ctor(void * this, void * name, void *
   secondary) */

void * __thiscall CaseInsensitiveStringPair_ctor(void *this,void *name,void *secondary)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a two-string key object from two input strings and uppercases the
                       first string in-place for case-insensitive comparison. It uses std::string
                       assignment and _toupper transformation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f6a3;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  puVar7 = (undefined4 *)((int)this + 4);
  *(undefined1 *)puVar7 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,name,0,0xffffffff);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             secondary,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = *(uint *)((int)this + 0x18);
  puVar6 = puVar7;
  if (0xf < uVar1) {
    puVar6 = (undefined4 *)*puVar7;
  }
  if (puVar6 == (undefined4 *)0x0) {
LAB_012ccb1b:
    FUN_00d83c2d(uVar2);
  }
  else {
    puVar3 = puVar7;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar7;
    }
    if (puVar6 < puVar3) goto LAB_012ccb1b;
    puVar3 = puVar7;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar7;
    }
    if ((undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar3) < puVar6) goto LAB_012ccb1b;
  }
  uVar1 = *(uint *)((int)this + 0x18);
  puVar3 = puVar7;
  if (0xf < uVar1) {
    puVar3 = (undefined4 *)*puVar7;
  }
  puVar3 = (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar3);
  if (puVar3 == (undefined4 *)0x0) {
LAB_012ccb58:
    FUN_00d83c2d(uVar2);
  }
  else {
    puVar4 = puVar7;
    if (0xf < uVar1) {
      puVar4 = (undefined4 *)*puVar7;
    }
    if (puVar3 < puVar4) goto LAB_012ccb58;
    puVar4 = puVar7;
    if (0xf < uVar1) {
      puVar4 = (undefined4 *)*puVar7;
    }
    if ((undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar4) < puVar3) goto LAB_012ccb58;
  }
  uVar1 = *(uint *)((int)this + 0x18);
  puVar4 = puVar7;
  if (0xf < uVar1) {
    puVar4 = (undefined4 *)*puVar7;
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar7;
    if (0xf < uVar1) {
      puVar5 = (undefined4 *)*puVar7;
    }
    if (puVar5 <= puVar4) {
      if (0xf < uVar1) {
        puVar7 = (undefined4 *)*puVar7;
      }
      if (puVar4 <= (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar7)) goto LAB_012ccb93;
    }
  }
  FUN_00d83c2d(uVar2);
LAB_012ccb93:
  secondary = (void *)((uint)secondary & 0xffffff00);
  FUN_012a26c0(local_14,puVar4,puVar3,this,puVar6,_toupper,puVar6,secondary);
  ExceptionList = local_c;
  return this;
}

