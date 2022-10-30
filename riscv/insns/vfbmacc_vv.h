VI_VFP_VV_BC_LOOP
({
  vd = f16_mulAdd(bc, vs2, vd);
},
{
  vd = f32_mulAdd(bc, vs2, vd);
},
{
  vd = f64_mulAdd(bc, vs2, vd);
})
