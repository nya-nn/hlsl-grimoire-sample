#pragma once

namespace myRenderer {
    class Dof
    {
    public:
        /// <summary>
        /// ������
        /// </summary>
        /// <param name="mainRenderTarget">���C�������_�����O�^�[�Q�b�g</param>
        /// <param name="zprepassRenderTarget">ZPrepass</param>
        void Init(RenderTarget& mainRenderTarget, RenderTarget& zprepassRenderTarget);
        /// <summary>
        /// �`��
        /// </summary>
        /// <param name="rc">�����_�����O�R���e�L�X�g</param>
        /// <param name="mainRenderTarget">���C�������_�����O�^�[�Q�b�g</param>
        void Render(RenderContext& rc, RenderTarget& mainRenderTarget);
    private:
        void InitCombimeBokeImageToSprite(Sprite& combineBokeImageSprite, Texture& bokeTexture, Texture& depthTexture);
    private:
        RenderTarget m_rtVerticalBlur;		//�����u���[�������邽�߂̃����_�����O�^�[�Q�b�g
        RenderTarget m_rtDiagonalBlur;		//�Ίp���u���[�������邽�߂̃����_�����O�^�[�Q�b�g
        RenderTarget m_rtPhomboidBlur;		//�Z�p�`�u���[�������邽�߂̃����_�����O�^�[�Q�b�g
        Sprite m_vertDIagonalBlurSprite;	//�����A�Ίp���u���[�p�̃X�v���C�g
        Sprite m_phomboidBlurSprite;		//�Z�p�`�u���p�̃X�v���C�g
        Sprite m_combineBokeImageSprite;	//�{�P�摜�����C�������_�����O�^�[�Q�b�g�ɍ������邽�߂̃X�v���C�g

    };
}
