// addr: 0x00ffa280
// name: AppPhysics_ModifiedBtVehicle_addWheel
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_ModifiedBtVehicle_addWheel(void * this, float *
   connectionPoint, float * wheelDirection, float * wheelAxle, float * suspensionRestLength, float
   wheelRadius_, float tuning_, void * extra, bool isFrontWheel_, bool flagA_, bool flagB_) */

void * __thiscall
AppPhysics_ModifiedBtVehicle_addWheel
          (void *this,float *connectionPoint,float *wheelDirection,float *wheelAxle,
          float *suspensionRestLength,float wheelRadius_,float tuning_,void *extra,
          bool isFrontWheel_,bool flagA_,bool flagB_)

{
  int iVar1;
  uint uVar2;
  void *other;
  void *pvVar3;
  int iVar4;
  int local_23c;
  int local_238;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  bool local_1c0;
  bool local_1bf;
  bool local_1be;
  undefined1 local_1b0 [404];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Creates a ModifiedBtWheelInfo construction record, grows the wheel-info
                       array, copies the new record into the array, updates the wheel transform, and
                       returns the new wheel record. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_016312fc;
  local_1c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffdb0;
  ExceptionList = &local_1c;
  local_220 = *connectionPoint;
  local_21c = connectionPoint[1];
  local_218 = connectionPoint[2];
  local_214 = connectionPoint[3];
  local_210 = *wheelDirection;
  local_20c = wheelDirection[1];
  local_208 = wheelDirection[2];
  local_204 = wheelDirection[3];
  local_200 = *wheelAxle;
  local_1fc = wheelAxle[1];
  local_1f8 = wheelAxle[2];
  local_1f4 = wheelAxle[3];
  local_1f0 = *suspensionRestLength;
  local_1ec = suspensionRestLength[1];
  local_1e0 = wheelRadius_;
  local_1e8 = suspensionRestLength[2];
  local_1e4 = suspensionRestLength[3];
  local_1d8 = tuning_;
  local_1d4 = *(undefined4 *)extra;
  local_1d0 = *(undefined4 *)((int)extra + 4);
  local_1cc = *(undefined4 *)((int)extra + 8);
  local_1c8 = *(undefined4 *)((int)extra + 0x10);
  local_1c0 = isFrontWheel_;
  local_1dc = *(undefined4 *)((int)extra + 0xc);
  local_1bf = flagA_;
  local_1be = flagB_;
  AppPhysics_ModifiedBtWheelInfo_initFromConstructionInfo(local_1b0,&local_220);
  local_238 = *(int *)((int)this + 0x11c);
  if (local_238 == *(int *)((int)this + 0x120)) {
    iVar4 = 0;
    if (local_238 == 0) {
      local_238 = 1;
    }
    else {
      local_238 = local_238 * 2;
    }
    if (*(int *)((int)this + 0x120) < local_238) {
      if (local_238 == 0) {
        local_23c = 0;
      }
      else {
        local_23c = FUN_01160bf0(local_238 * 400,0x10,uVar2);
      }
      iVar1 = *(int *)((int)this + 0x11c);
      if (0 < iVar1) {
        do {
          pvVar3 = (void *)(local_23c + iVar4 * 400);
          local_14 = 0;
          if (pvVar3 != (void *)0x0) {
            AppPhysics_ModifiedBtWheelInfo_copyFrom
                      (pvVar3,(void *)(*(int *)((int)this + 0x124) + iVar4 * 400));
          }
          local_14 = 0xffffffff;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      if (*(int *)((int)this + 0x124) != 0) {
        if (*(char *)((int)this + 0x128) != '\0') {
          FUN_01160c00(*(int *)((int)this + 0x124));
        }
        *(undefined4 *)((int)this + 0x124) = 0;
      }
      *(undefined1 *)((int)this + 0x128) = 1;
      *(int *)((int)this + 0x124) = local_23c;
      *(int *)((int)this + 0x120) = local_238;
    }
  }
  pvVar3 = (void *)(*(int *)((int)this + 0x11c) * 400 + *(int *)((int)this + 0x124));
  local_14 = 1;
  if (pvVar3 != (void *)0x0) {
    AppPhysics_ModifiedBtWheelInfo_copyFrom(pvVar3,other);
  }
  local_14 = 0xffffffff;
  *(int *)((int)this + 0x11c) = *(int *)((int)this + 0x11c) + 1;
  pvVar3 = (void *)(*(int *)((int)this + 0x11c) * 400 + -400 + *(int *)((int)this + 0x124));
  FUN_00ff6400(pvVar3,0);
  FUN_00ff71e0(*(int *)((int)this + 0x11c) + -1,0);
  ExceptionList = local_1c;
  return pvVar3;
}

