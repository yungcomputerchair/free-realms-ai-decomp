// addr: 0x00bfc280
// name: ProxiedCharacterSeekMovementController_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * ProxiedCharacterSeekMovementController_ctor(void * this, undefined4
   arg1_, undefined4 arg2_, undefined4 arg3_, undefined4 arg4_, undefined4 arg5_, float speed_,
   undefined4 arg7_, undefined4 arg8_, undefined4 arg9_, float * direction) */

void * __thiscall
ProxiedCharacterSeekMovementController_ctor
          (void *this,undefined4 arg1_,undefined4 arg2_,undefined4 arg3_,undefined4 arg4_,
          undefined4 arg5_,float speed_,undefined4 arg7_,undefined4 arg8_,undefined4 arg9_,
          float *direction)

{
  float10 fVar1;
  float local_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a ProxiedCharacterSeekMovementController, initializing the
                       ProxiedCharacterMovementController base, Target subobject, seek target data,
                       and yaw/pitch from an input vector. Evidence is the
                       ProxiedCharacterMovementController, ProxiedCharacterSeekMovementController,
                       and Target vtable assignments. */
  puStack_18 = &LAB_015f2d13;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined ***)this = ProxiedCharacterMovementController::vftable;
  *(undefined4 *)((int)this + 4) = arg1_;
  local_14 = 0;
  *(float *)((int)this + 0xc) = speed_;
  *(undefined4 *)((int)this + 0x10) = arg7_;
  *(undefined4 *)((int)this + 8) = arg2_;
  *(undefined4 *)((int)this + 0x14) = arg8_;
  *(undefined ***)this = ProxiedCharacterSeekMovementController::vftable;
  *(undefined4 *)((int)this + 0x18) = arg9_;
  *(undefined4 *)((int)this + 0x1c) = Target::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_34 = this;
  FUN_0101c060((undefined4 *)((int)this + 0x1c));
  local_14 = CONCAT31(local_14._1_3_,1);
  *(undefined4 *)((int)this + 0x24) = arg5_;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(bool *)((int)this + 0x2c) = speed_ != 0.0;
  fVar1 = (float10)fpatan((float10)*direction,(float10)direction[2]);
  uStack_48 = uRam01cb53d8;
  uStack_44 = uRam01cb53dc;
  local_30 = SQRT(direction[3] * fRam01cb546c * direction[3] * fRam01cb546c +
                  direction[2] * fRam01cb5468 * direction[2] * fRam01cb5468 +
                  direction[1] * fRam01cb5464 * direction[1] * fRam01cb5464 +
                  *direction * _DAT_01cb5460 * *direction * _DAT_01cb5460);
  local_50 = (float)fVar1;
  fVar1 = (float10)fpatan(-(float10)direction[1],(float10)local_30);
  fStack_4c = (float)fVar1;
  fStack_2c = local_30;
  fStack_28 = local_30;
  fStack_24 = local_30;
  FUN_009606e0(&local_50,1);
  ExceptionList = local_1c;
  return this;
}

