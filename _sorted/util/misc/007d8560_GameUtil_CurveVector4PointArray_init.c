// addr: 0x007d8560
// name: GameUtil_CurveVector4PointArray_init
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameUtil_CurveVector4PointArray_init(undefined4 *param_1,int param_2)

{
  undefined3 uVar1;
  void *pvVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructor/initializer for a SoeUtil::Array<GameUtil::Curve<Vector4>::Point>
                       owner; sets vftable and allocates curve point subarrays. */
  pvVar2 = ExceptionList;
  puStack_8 = &LAB_015622c7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = SoeUtil::Array<GameUtil::Curve<SoeUtil::Math::Vector<float,4>_>::Point,0,1>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = SoeUtil::Array<GameUtil::Curve<SoeUtil::Math::Vector<float,4>_>::Segment,0,1>::
               vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uStack_3 = 0;
  uVar1 = uStack_3;
  local_4 = 1;
  uStack_3 = 0;
  if (param_2 == 1) {
    pvVar2 = Mem_Alloc(8);
    _local_4 = CONCAT31(uStack_3,2);
    if (pvVar2 != (void *)0x0) {
      GameUtil_CurveLinear_Vector4f_ctor(pvVar2,param_1);
      uVar3 = extraout_EAX;
      goto LAB_007d8632;
    }
  }
  else {
    uStack_3 = uVar1;
    if (param_2 == 2) {
      pvVar2 = Mem_Alloc(0x3c);
      _local_4 = CONCAT31(uStack_3,3);
      if (pvVar2 != (void *)0x0) {
        GameUtil_CurveNaturalCubicSpline_Vector4f_ctor(pvVar2,param_1);
        uVar3 = extraout_EAX_00;
        goto LAB_007d8632;
      }
    }
    else {
      if (param_2 != 3) {
        ExceptionList = pvVar2;
        return param_1;
      }
      pvVar2 = Mem_Alloc(8);
      _local_4 = CONCAT31(uStack_3,4);
      if (pvVar2 != (void *)0x0) {
        GameUtil_CurveCatmullRomSpline_Vector4f_ctor(pvVar2,param_1);
        uVar3 = extraout_EAX_01;
        goto LAB_007d8632;
      }
    }
  }
  uVar3 = 0;
LAB_007d8632:
  *param_1 = uVar3;
  ExceptionList = local_c;
  return param_1;
}

