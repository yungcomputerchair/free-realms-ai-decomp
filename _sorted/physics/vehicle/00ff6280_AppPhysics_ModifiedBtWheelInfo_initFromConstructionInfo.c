// addr: 0x00ff6280
// name: AppPhysics_ModifiedBtWheelInfo_initFromConstructionInfo
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_ModifiedBtWheelInfo_initFromConstructionInfo(void * this, void
   * constructionInfo) */

void __thiscall
AppPhysics_ModifiedBtWheelInfo_initFromConstructionInfo(void *this,void *constructionInfo)

{
  undefined4 uVar1;
  
                    /* Copies wheel construction parameters into a ModifiedBtWheelInfo-like
                       structure and initializes runtime suspension/contact state defaults. */
  *(undefined4 *)((int)this + 0x160) = DAT_01762a34;
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)((int)constructionInfo + 0x40);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)((int)constructionInfo + 0x44);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)((int)constructionInfo + 0x48);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)constructionInfo + 0x4c);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)constructionInfo + 0x50);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)constructionInfo + 0x54);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)constructionInfo;
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)constructionInfo + 4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)constructionInfo + 8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)constructionInfo + 0xc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)constructionInfo + 0x10);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)constructionInfo + 0x14);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)constructionInfo + 0x18);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)constructionInfo + 0x1c);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)((int)constructionInfo + 0x20);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)constructionInfo + 0x24);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)((int)constructionInfo + 0x28);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)((int)constructionInfo + 0x2c);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)constructionInfo + 0x30);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)constructionInfo + 0x34);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)constructionInfo + 0x38);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)((int)constructionInfo + 0x3c);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)constructionInfo + 0x5c);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)constructionInfo + 0x58);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)constructionInfo + 0x5c);
  uVar1 = *(undefined4 *)((int)constructionInfo + 0x58);
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x128) = _DAT_017e795c;
  *(undefined1 *)((int)this + 0x134) = *(undefined1 *)((int)constructionInfo + 0x60);
  *(undefined1 *)((int)this + 0x135) = *(undefined1 *)((int)constructionInfo + 0x61);
  *(undefined1 *)((int)this + 0x136) = *(undefined1 *)((int)constructionInfo + 0x62);
  return;
}

