// addr: 0x01114260
// name: btPolyhedralConvexAabbCachingShape_recalcLocalAabb
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void btPolyhedralConvexAabbCachingShape_recalcLocalAabb(int * this) */

void __fastcall btPolyhedralConvexAabbCachingShape_recalcLocalAabb(int *this)

{
  uint uVar1;
  float fStack_7c;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = _DAT_01cba1d0 & 1;
                    /* Recomputes and caches the local AABB by querying support vertices in six
                       cardinal directions and expanding by collision margin. */
  *(undefined1 *)(this + 0x1c) = 1;
  if (uVar1 == 0) {
    _DAT_01cba1d0 = _DAT_01cba1d0 | 1;
    _DAT_01cba170 = _DAT_0175b420;
    _DAT_01cba184 = _DAT_0175b420;
    _DAT_01cba198 = _DAT_0175b420;
    _DAT_01cba174 = 0;
    _DAT_01cba178 = 0;
    _DAT_01cba17c = 0;
    _DAT_01cba180 = 0;
    _DAT_01cba188 = 0;
    _DAT_01cba18c = 0;
    _DAT_01cba190 = 0;
    _DAT_01cba194 = 0;
    _DAT_01cba19c = 0;
    _DAT_01cba1a0 = DAT_01762a34;
    _DAT_01cba1a4 = 0;
    _DAT_01cba1a8 = 0;
    _DAT_01cba1ac = 0;
    _DAT_01cba1b0 = 0;
    _DAT_01cba1b4 = DAT_01762a34;
    _DAT_01cba1b8 = 0;
    _DAT_01cba1bc = 0;
    _DAT_01cba1c0 = 0;
    _DAT_01cba1c4 = 0;
    _DAT_01cba1c8 = DAT_01762a34;
    _DAT_01cba1cc = 0;
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0.0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0.0;
  local_50 = 0;
  local_4c = 0.0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0.0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0.0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  (**(code **)(*this + 0x40))(&DAT_01cba170,&local_70,6);
  this[0x18] = (int)((float)this[0xc] + fStack_7c);
  this[0x14] = (int)(local_4c - (float)this[0xc]);
  this[0x19] = (int)((float)this[0xc] + local_68);
  this[0x15] = (int)(local_38 - (float)this[0xc]);
  this[0x1a] = (int)((float)this[0xc] + local_54);
  this[0x16] = (int)(local_24 - (float)this[0xc]);
  return;
}

